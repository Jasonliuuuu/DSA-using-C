// How compiler know the address of an array whenever you want to do action on an array. Thing is that they jnow the base address of an array. That's say the address of A[0] is 200 and there are 5 integer in this array. And each integer would take 2 Bytes. So that if you want to alter the number that saved in the A[3], the compiler will calculate the address of it, which is 200 + 3*2 = 206. 200 is the base address and 3 is index. and 2 is the Bytes that integer takes. If it is formula, it would be like Lo + i * w
// So the address of this location is known and updated during runtime. It is called data binding. (System programming or assembly programming). But this still a relative address. 
// In previosuly, user can state like this to determine
// int A[1..5]
// So that you can see the formula we took is not cool now
// we have to change the formula
// But in C++, this is not allowable. A reason why in C++  we cannot have array starts from one. It's because we will have one extra operation when accepting this situation. And this will cause crutial damage if you want to alter all the array or have some big chages on it. 

// Now you know how compiler manage 1D array. Let's talk about the 2D array. 
// Actuallu for computer, they don't think that it is a 2D array, esepcially in terms of how they keep the value. They keep the value and store the value of the array just like 1D array. Raw by Raw. Add(A[1][2]) = 200 + [1*4 + 2] *2
// Add(A[2][3]) = 200 + [2*4 + 3] * 2
// C and C++ follow raw major mapping   
// On 3 dimension: when type x[l][m][n]
// Address(x[i][j][k]) = Lo +[i * m * n + j * n + k] *w