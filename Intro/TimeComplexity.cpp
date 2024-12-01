// The time complecity basically depends on the prodecure tha you are adopting. 

// Introducing n. N means not just 5 or 10, this is the first important thing. N means some number of elements. 
// Let's say there are n elements in this list. 
// List: 2, 5, 9, 6, 4, 12, 15, 8, 3, 7
// We want to add all of the number that existed in the list. 
// You have to go through all of them, one by one you have to take the element and go on adding it. 
// So what is the time taken? N! We say N. The next thing, what do you want to do? You may want to search a particular number. 
// The goal is 12. Whether 12 is there or not, search for it. 
// At most, how many elements are you going to search
// What is the time taken? N
// So this n, we represent it as a degree. So, we can say Order(n)
// Now, assuming we compare all the elements and fo through it and compare to others. For example, we go to 2 first and then compare it to all the other elements. 2 to 5, 2 to 9, 2 to 6. And after this procede all (compate to 2). We go to the next element, which is 5. So we compare 5 to 2, 5 to 9, 5 to 6, etc. 
// so for each elements. We will be checkung all the rest of the elements. So for one value. It will process all elements. Of for single elemment, it will going to caompare with n elements. And also, there are n elements that needed to be compare. So the time complexity is O(n^2).
// Actually, if we grab the first element , there is only n-1 element that needed to be compare to the first element. that is n-1. After that, we choose the second element to compare with the rest of the elements, which have n-2 elements. that is n-2. So how many time we are going to procedure. it is (n-1) + (n-2) + (n-3) + ... + 3 + 2 + 1. So that is [(n^2-n)]/2. and the time complexity is O(n^2). Since that after we find out it is [(n^2-n)]/2. First, we find the fastest growing term and keep it only. Then take out the coefficient that the term own. As a result, it leaves O(n^2) only. 
// time complexity is a way of showing how the runtime of a function increases as the size of the input increases. 