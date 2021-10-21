/*
HASH TABLE
- a hashtable is an array of fixed size.
- array element are indexed by a key, which is mapped to an array index (0 to table size -1)
- mapping (hash function)
    h from key to index
    h("john") = 12

Hash table components
- hash function
- hash table
- collision handling scheme

Operations
- Insertion     T[h(key)] = value
- Searching     return T[h(key)]
- Deletion      T[h(key)] = NULL

Collisions
- collsion handling strategy
- open hashing / seprate chaining

Good hash function
- reduce the chance of collision - distribute key uniformly over the table
- should be fast to compute

Hash function
- better if table size is prime number
- to calculate interger from key "abcd" -> 97+98+99+100=394
- anagrams will map to same (tab,bat)


### Collision handling otherways like linear probing, quad prob and other techniques are done ###
*/
