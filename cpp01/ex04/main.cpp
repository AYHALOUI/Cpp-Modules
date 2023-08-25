/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:52:28 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/25 18:02:13 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

// aymene haloui hello from world

void my_replace(int pos, int len, std::string& line, std::string s2)
{
	int j = 0;
	for (size_t i = pos; i < len; i++)
	{
		line[pos] = s2[j];
		j++;
	}
	std::cout << line << std::endl;
}

int main(int ac, char **av)
{
	// std::string fileName;
	// std::string outfile;
	// std::string s1;
	// std::string s2;
	// std::string line;

	// std::cout << "enter name of file : ";
	// std::getline(std::cin, fileName);

	// std::cout << "enter s1 : ";
	// std::getline(std::cin, s1);

	// std::cout << "enter s2 : ";
	// std::getline(std::cin, s2);
	
	// std::ifstream inputFile(fileName);
	// if (!inputFile)
	// {
	// 	std::cout << "Error to open infile" << std::endl;
	// 	return (0);
	// }
	// outfile = fileName + ".replace";
	// std::ofstream outputFile(outfile);
	// if (!outputFile)
	// {
	// 	std::cout << "Error to create outfile" << std::endl;
	// 	return (0);
	// }
	// while (std::getline(inputFile, line))
	// {
	// 	// std::cout << line << std::endl;
	// 	size_t pos = line.find(s1);
	// 	if (!pos)
	// 		std::cout << pos << std::endl;
	// }
	// std::cout << outfile << std::endl;
	std::string str = "hello from another world";
	std::string& alias = str;
	std::string s1 = "from";
	std::string s2 = "hey";
	size_t pos = str.find(s1);
	std::cout << pos << std::endl;
	my_replace(pos, s1.length(), alias, s2);
	// size_t position = str.find("OpenAI");
	std::cout << alias << std::endl;
	return (1);
}



// #include <iostream>
// #include <fstream>
// #include <string>

// void replaceStringInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
//     // Ouvrir le fichier d'entrée
//     std::ifstream inputFile(filename);
//     if (!inputFile) {
//         std::cerr << "Erreur lors de l'ouverture du fichier d'entrée." << std::endl;
//         return;
//     }

//     // Créer le nom du fichier de sortie
//     std::string outputFilename = filename + ".replace";

//     // Ouvrir le fichier de sortie
//     std::ofstream outputFile(outputFilename);
//     if (!outputFile) {
//         std::cerr << "Erreur lors de la création du fichier de sortie." << std::endl;
//         return;
//     }

//     // Lire le contenu du fichier d'entrée ligne par ligne
//     std::string line;
//     while (std::getline(inputFile, line)) {
//         // Rechercher et remplacer les occurrences de s1 par s2 dans chaque ligne
//         size_t pos = 0;
//         while ((pos = line.find(s1, pos)) != std::string::npos) {
//             line.replace(pos, s1.length(), s2);
//             pos += s2.length();
//         }

//         // Écrire la ligne modifiée dans le fichier de sortie
//         outputFile << line << std::endl;
//     }

//     // Fermer les fichiers
//     inputFile.close();
//     outputFile.close();

//     std::cout << "Le fichier a été traité avec succès. Le résultat est disponible dans le fichier " << outputFilename << std::endl;
// }

// int main() {
//     std::string filename, s1, s2;

//     // Demander les entrées à l'utilisateur
//     std::cout << "Entrez le nom du fichier : ";
//     std::getline(std::cin, filename);

//     std::cout << "Entrez la chaîne à remplacer : ";
//     std::getline(std::cin, s1);

//     std::cout << "Entrez la nouvelle chaîne : ";
//     std::getline(std::cin, s2);

//     // Appeler la fonction pour effectuer le remplacement
//     replaceStringInFile(filename, s1, s2);

//     return 0;
// }