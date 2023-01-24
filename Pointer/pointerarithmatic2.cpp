// Fill the output

// Assume the memory address of variable ‘a’ is 400 (and an integer takes 4 bytes), what will be the output -
// int a = 7;
// int *c = &a;
// c = c + 3;
// cout<< c << endl;

// Solution Description
// c stores address of a (and points to value of a). 
// address that c stores is incremented by 3. 
// since c is of type int, increment in bytes is 3 integer 
// addresses, that is 3*4 = 12 bytes. therefore 400 + 12 = 412

