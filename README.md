# VIM
* To yank all from Vim: 
	* %y+

* To yank certain lines from Vim:
	* Go into Visual Line by Shift+V
	* Highlight the lines
	* Type "*y

* To merge two lines together on same line:
	* Visual line mode
	* Select the lines
	* then type Shift+J
* Windows Compile and Run
	* C++ -- :w | ! cls && g++ -std=c++17 % -o %:r && %:r.exe
	* Python -- :w | ! cls && python %:r.py 
* Mac Compile and Run
	* C++ -- :w | clear; g++ -std=c++17 % -o %:r && ./%:r




# C++ Common routines

* Insert to beginning of vector
	* myVector.insert(myVector.begin(), valueTobeEntered)

* Insert element at an index of vector
	* myVector.insert(myVector.begin() + index, valueToBeEntered);

* Erase element at an index of vector
	* myVector.erase(myVector.begin() + index);

* Remove last element in vector
	* myVector.pop_back();

* Populate a vector from n to m
	* Create vector with initialize size
		* vector<type> myVector(n);
	* Populate up to m
		* std::iota (myVector.begin(), myVector.end(), m);

* Update each value in vector
	for (double &d : myVector) {
		d += 1.0;
	}

* Check if a string s1 is a substring of string s2

	if (s2.find(s1) != npos) {
	}

* When checking the columns and rows of matrix, use isalpha on each character so that garbage characters won't be scanned.
	* check rows by matrix[i][j]
 	* check columns by matrix[j][i]
* Check if there are any duplicate characters inside a string, S
	* Convert string to a set; set<char> a (s.begin(), s.end())
	* Convert string to a vector; vector<char> b (s.begin(), s.end())
	* Compare set's size() and vector's size()
	* If they are equal, there are no duplicates
	* If they are not equal, there are duplicates

* Count the number of occurrences of a substring in a string, S
	* size_t p = S.find(substring);
	* while (p != string::npos)
	* p = s.find(substring, p + 1); // Specifying and incrementing 2nd arg will prevent from counting prev
* Count the number of occurrences of an element in a vector (we can even use string itself has the container)
	* std::count(myVector.begin(), myVector.end(), element);
* When using stringstream, use while(ss >> word) instead of just (ss) because it would read in a weird extra character
	* We can concatenate strings together by space. Make sure to check that we don't add an extra space at the end by checking if (i < words.size() - 1)
* When concatenating an integer to a string, the int must be converted using to_string(n), where n is the int.
* When concatenating a character to a string, we can easily do s += c, where s is the string and c is character
	* However, we cannot do s += c + s.substr(1) because '+' cannot add together char and basic_string
	* So we need to do s += c first and then s += s.substr(1)

# Common time complexities
We can get away with a higher time complexity with smaller input size
As input size gets bigger, we need to be careful and try to strive for O(n) or O(log(n) complexity.

https://codeforces.com/blog/entry/21344  
Let n be the main variable in the problem.  

    If n ≤ 12, the time complexity can be O(n!).
    If n ≤ 25, the time complexity can be O(2^n).
    If n ≤ 100, the time complexity can be O(n^4).
    If n ≤ 500, the time complexity can be O(n^3).
    If n ≤ 10^4, the time complexity can be O(n^2).
    If n ≤ 10^6, the time complexity can be O(n log n).
    If n ≤ 10^8, the time complexity can be O(n).
    If n > 10^8, the time complexity can be O(log n) or O(1).

Examples of each common time complexity

    O(n!) [Factorial time]: Permutations of 1 ... n
    O(2^n) [Exponential time]: Exhaust all subsets of an array of size n
    O(n^3) [Cubic time]: Exhaust all triangles with side length less than n
    O(n^2) [Quadratic time]: Slow comparison-based sorting (eg. Bubble Sort, Insertion Sort, Selection Sort)
    O(n log n) [Linearithmic time]: Fast comparison-based sorting (eg. Merge Sort)
    O(n) [Linear time]: Linear Search (Finding maximum/minimum element in a 1D array), Counting Sort
    O(log n) [Logarithmic time]: Binary Search, finding GCD (Greatest Common Divisor) using Euclidean Algorithm
    O(1) [Constant time]: Calculation (eg. Solving linear equations in one unknown)
