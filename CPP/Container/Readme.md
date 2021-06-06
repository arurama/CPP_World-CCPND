# **About Containers in CPP** 

**1) Vector Container**
---

**1) Vector Container**
1. Initialize
	1. #include <vector>
	2. vector<int> vect;
	3. vector<int> vect(3, 10); output : 10,10,10
	4. vector<int> vect{ 10, 20, 30 }; 
	5. vector<int> v1 = {-1, 3, 5, -8, 0};
	6. vector<int> vect2(vect1.begin(), vect1.end()); 
	7. vector<int> vect2(vect1); 
	8. auto vect3(v1)
	9. vector<vector<int>>  v {{{1,2,3},{4,5,6},{7,8,9}}};
	10. typedef vector<vector<int> > IntMatrix;  IntMatrix m;  
	11. vector<vector<int>::iterator> iStart; 
	12. vect3(fptr,lptr);// contains copies of element in mem location
	13. vector<vector <double>> table(Rows) ,vector<double>(Colums,0,0)) >
		1. talbe[0]
		2. table[1][3] refers to an ekenent within specifc row
2. Input & edit 
	1. push_back();// vect.push_back(x); //adds element to end
	2. pop_back();// vec.pop_back(); //removes last element
	3. vec.clear() //Removes all the elements	   
		1.  clear() function can be used to erase all elements in the vector without reducing the capacity		
	4. vec.reserve(10) //increase vector capacity to 10 elements
	5. vec.shrink_to_fit(); / reserved space of your current needs, 
	6. v2.resize(7); //resize to 7
		1. v2.resize(10, -1); resize to 10. New elements initialized with -1
		2. v2.resize(4);
3. opertor
	1. v1=v2
	2. v1.swap(v2)
4. output
	1. vector.front(); //  The first element
	2. vector.back(); // The last element
	3. operator []// "vector[6]
	4. at()//"vec.at(4);
	5. vec.size();// represents the current number of elements in the array
	6. vec.capacity();
		1. To find the number of elements that can be stored based on the current memory allocation, you can use the capacity() function: 	   
	7.  vec.max_size();//To learn the maximum size of a std::vector on system
	   
