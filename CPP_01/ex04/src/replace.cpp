/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:54:13 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/22 18:59:13 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/replace.hpp"

void replaceInFile(std::ifstream& inputFile, const std::string& s1, const std::string& s2, const std::string& filename)
{
    std::ofstream outputFile(filename + ".replace");
    if (!outputFile)
    {
        std::cerr << "Error: Unable to create output file" << filename << ".replace" << std::endl;
        return;
    }
    std::string line;
    while (std::getline(inputFile, line))
    {
        size_t start = 0;
        size_t pos = line.find(s1);
        while (pos != std::string::npos)
        {
            outputFile << line.substr(start, pos - start);
            outputFile << s2;
            start = pos + s1.length();
            pos = line.find(s1, start);
        }
        outputFile << line.substr(start) << '\n';
    }
}