/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:17:28 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/11 17:31:47 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void){
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    
    std::cout << "address of string object: " << &string << std::endl;
    std::cout << "value of stringPTR (address it holds): " << stringPTR << std::endl;
    std::cout << "address of stringREF (same as string): " << &stringREF << std::endl;
    
    std::cout << "string value: " << string << std::endl;
    std::cout << "stringPTR points to: " << *stringPTR << std::endl;
    std::cout << "stringREF alias: " << stringREF << std::endl;
    return 0;
}