/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:54:11 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/22 19:23:48 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/replace.hpp"

int main(int argc, char* argv[]) 
{
    Color::Modifier red(Color::FG_RED);
    Color::Modifier blue(Color::FG_L_BLUE);
    Color::Modifier def(Color::FG_DEFAULT);

    if (argc != 4) {
        std::cerr << blue << "Usage: " << argv[0] << " <filename> <s1> <s2>\n" << 
        "Tip: Replace 'Quiet' by 'Noisy'.\n" <<
        "Tip: Replace 'Whispers' by 'Shouts'.\n" <<
        "Tip: Replace 'Sunlight' by 'Moonlight'." <<
        def << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty() || s2.empty() || filename.empty()){
        std::cerr << red << "Error: cannot be empty" << def << std::endl;
        return 1;
    }

    std::ifstream inputFile(filename);
    if (!inputFile)
    {
        std::cerr << red << "Error: Unable to open input file " << filename << def << std::endl;
        return 1;
    }

    replaceInFile(inputFile, s1, s2, filename);

    std::cout << "File content replaced and saved to: " << filename + ".replace" << std::endl;
    return 0;
}