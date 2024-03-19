#include <string>
/*
* is_vowel
* 
* uses an if statement to see if the argument is a consonant or vowel.
* 
* input: a char
* output: returns a bool value. true if the argument is vowel, false if it is consonant.
*/
bool is_vowel(char letter) {
	if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
		return true;
	}
	return false;
}

/*
* is_consonant
* 
* uses an if statement to see if the argument is a consonant
* 
* input:a char
* output:returns a bool value. true if the argument is consonant and false if it is not.
*/
bool is_consonant(char letter) {
	if (!(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')) {
		return true;
	}
	return false;
}

/*
* ends_with
* 
* uses if and for statements to check if candidate and suffix are empty. and to see
* if candidate ends with suffix.
* 
* input:two strings, candidate and suffix
* output:returns true if candidate and suffix are empty. returns true if candidate ends with suffix.
* returns false other wise.
*/
bool ends_with(std::string candidate, std::string suffix) {
	if (candidate == "" && suffix == "") {
		return true;
	}
	if (candidate.empty() || candidate.length() < suffix.length()) {
		return false;
	}
		for (int i = 0; i < suffix.size(); i++) {
			if (!(candidate[candidate.size() - 1 - i] == suffix[suffix.size() - 1 - i])) {
				return false;
			}
		}
	
	return true;

}


/*
* ends_with_double_consonant
* 
* uses if statements to check if the last two characters of the argument are
* both consonants and qual to one another.
* 
* input:a string
* output:returns a bool. true if the last two characters of the argument are
* both consonants and qual to one another. returns false otherwise.
*/
bool ends_with_double_consonant(std::string word) {
	if (word.size() >= 2) {
		if (is_consonant(word[word.size() - 1]) && is_consonant(word[word.size() - 2]) && word[word.size() - 1] == word[(word.size() - 2)]) {
			return true;
		}
	}
	return false;
}

/*
* ends_with_cvc
* 
* uses if statements and calls is_consonant and is_vowel 
* to check if the last theree characters of the argument are
* consonant, vowel, and consonant. 
* 
* input:a string
* output:returns a bool. True if if the last three characters of the argument
* are a consonant, a vowel and then a consonant. False otherwise.
*/
bool ends_with_cvc(std::string word) {
	
	if (word.size() >= 3) {
	if (is_consonant(word[word.size() - 1]) && is_consonant(word[word.size() - 3]) && is_vowel(word[word.size() - 2])) {
		return true;
	}
}
	return false;
}

/*
* count_consonants_at_front
* 
* uses a counter and for loop to count the number of the consecutive consonants
* 
* input:a string
* output:returns the number of consecutive consonants at the beginning of the argument
*/
int count_consonants_at_front(std::string word) {
	int counter = 0;
	for (int i = 0; i < word.size(); i++) {
		if ((is_consonant(word[i]))) {
			counter++;
		}
		else {
			break;
		}
	}
	return counter;
}

/*
* count_vowels_at_back
* 
* uses a counter and a for loop to count the number of consecutive vowels
* at the end of the string passed as an argument.
* 
* input:a string
* output:returns consecutive vowels at the end of the string
* passed as an argument
*/
int count_vowels_at_back(std::string word) {
	int counter = 0;
	for (int i = word.length() - 1; i >= 0; i--) {
		if ((is_vowel(word[i]))) {
			counter++;
		}
		else {
			break;
		}
	}
	return counter;
}

/*
* contains_vowel
* 
* uses a for loop and if statement to check if there is any vowels in the argument
* 
* input: a string
* output:returns true if there is a vowel anywhere in the argument.
* It returns false otherwise
*/
bool contains_vowel(std::string word) { 
	for (int i = 0; i < word.size(); i++) {
		if (is_vowel(word[i])) {
			return true;
		}
	}
	return false;
}


/*
* new_ending
* 
* creates a new string from candidate by removing its last suffix length characters
* and replacing them with replacement
* 
* input:two strings called candidate and suffix and a number called suffix length
* output: creats a new string and retunrs that new string
*/
std::string new_ending(std::string candidate, int SuffixLength, std::string replacement) {
	std::string newString = "";
	if (SuffixLength == candidate.length()) {
		return replacement;
	}
	newString = candidate.substr(0, candidate.size() - SuffixLength) + replacement;
	
	return newString;
}
