#ifndef CIPHER_HPP
#define CIPHER_HPP

#include "CipherMode.hpp"

#include <cstddef>
#include <string>
#include <vector>

/**
 * \file Cipher.hpp
 * \brief Contains the declaration of the Cipher base class
 */

/**
 * \class Cipher
 * \brief Interface for cipher
 */

class Cipher{
    public: 

        /**
         * \brief Apply the cipher to the provided text
         *
         * \param inputText The text to encrypt or decrypt
         * \param cipherMode Whether to encrypt or decrypt the input text
         * \return The result of applying the cipher to the input text
         */
        
        virtual std::string applyCipher( const std::string& input,
                                        const CipherMode mode ) const = 0;

        Cipher() = default;
        Cipher(const Cipher& rhs) = default;
        Cipher (Cipher&& rhs) = default;
        Cipher& operator = (const Cipher& rh) =default;
        Cipher& operator = (Cipher&& rh) =default;
        virtual ~Cipher() = default;

        
};

#endif