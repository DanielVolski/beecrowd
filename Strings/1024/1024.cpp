#include <iostream>
#include <string>

std::string encrypt(std::string message);

int main()
{
    int n = 0;
    std::string text_to_encrypt;

    std::cin >> n;
    std::cin.ignore(1, '\n');

    while (n > 0)
    {
        std::getline(std::cin, text_to_encrypt);

        if (text_to_encrypt.empty())
            return 1;

        std::cout << encrypt(text_to_encrypt) << std::endl;

        n--;
    }

    return 0;
}

std::string encrypt(std::string message)
{
    std::string encrypted_message = message;

    /* Shift all the LETTERS three positions to the right according to ascii table 
    *  and reverse them
    */
    for (int i = 0; i < message.size(); i++)
        if ((message[i] >= 65 and message[i] <= 90) or (message[i] >= 97 and message[i] <= 122))
            encrypted_message[(message.size() - 1) - i] = message[i] + 3;
        else
            encrypted_message[(message.size() - 1) - i] = message[i];
    
    /* Shift letters from half (truncated) on */
    for (int i = encrypted_message.size() / 2; i < encrypted_message.size(); i++)
        encrypted_message[i] = encrypted_message[i] - 1;
    
    return encrypted_message;
}