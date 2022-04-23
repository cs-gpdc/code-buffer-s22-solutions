# Code Buffer (Spring '22)- Solutions

### [CS-GPDC](https://www.linkedin.com/company/cs-gpdc/) brings to you the first-ever Coding Challenge by the Graduate Computer Science Program- [HackerRank Contest URL](https://www.hackerrank.com/code-buffer-s22)

### Editorialist- [Sagar Pathare](https://www.linkedin.com/in/sspathare97/)  

## Problems

1. [Outspeed](https://www.hackerrank.com/contests/code-buffer-s22/challenges/outspeed)
   * Problem Setter- [Sagar Pathare](https://www.linkedin.com/in/sspathare97/)
   * Required Knowledge- LCM
   * Time Complexity- O(n*logn)
   * Approach- Find the LCM of all numbers
   * Setter's Solutions
     * [C++](https://github.com/cs-gpdc/code-buffer-s22-solutions/blob/main/1-outspeed/author-solutions/main.cpp)
     * [Python](https://github.com/cs-gpdc/code-buffer-s22-solutions/blob/main/1-outspeed/author-solutions/main.py)

2. [Graph Fight](https://www.hackerrank.com/contests/code-buffer-s22/challenges/graph-fight)
   * Problem Setter- [Sachin Sharma](https://www.linkedin.com/in/sachin-sharma-625848a9/)
   * Required Knowledge- Graph, Tree
   * Time Complexity- O(n)
   * Approach- Check whether the sum of all degrees is 2*(n-1) or not
   * Setter's Solutions
     * [Java](https://github.com/cs-gpdc/code-buffer-s22-solutions/blob/main/2-graph-fight/author-solutions/main.java)
   * Problem Tester- [Sagar Pathare](https://www.linkedin.com/in/sspathare97/)
   * Tester's Solutions
     * [C++](https://github.com/cs-gpdc/code-buffer-s22-solutions/blob/main/2-graph-fight/tester-solutions/main.cpp)
     * [Python](https://github.com/cs-gpdc/code-buffer-s22-solutions/blob/main/2-graph-fight/tester-solutions/main.py)

3. [Lazy Gilfoyle](https://www.hackerrank.com/contests/code-buffer-s22/challenges/lazy-gilfoyle)
   * Problem Setter- [Sagar Pathare](https://www.linkedin.com/in/sspathare97/)
   * Required Knowledge- Monotonic Stack
   * Time Complexity- O(n)
   * Approach- Find the previous greater element
   * Setter's Solutions
     * [C++](https://github.com/cs-gpdc/code-buffer-s22-solutions/blob/main/3-lazy-gilfoyle/author-solutions/main.cpp)
     * [Python](https://github.com/cs-gpdc/code-buffer-s22-solutions/blob/main/3-lazy-gilfoyle/author-solutions/main.py)

4. [Bo and Passcodes](https://www.hackerrank.com/contests/code-buffer-s22/challenges/bo-and-passcode)
   * Problem Setter- [Sachin Sharma](https://www.linkedin.com/in/sachin-sharma-625848a9/)
   * Required Knowledge- DP, Graph, Shortest Path, Floyd–Warshall, Greedy
   * Time Complexity- O(n)
   * Approach- Find the minimum cost for each digit using Floyd–Warshall algorithm. Then perform a linear scan on the input string to collect the cost of each digit.
   * Setter's Solutions
     * [C++](https://github.com/cs-gpdc/code-buffer-s22-solutions/blob/main/4-bo-and-passcodes/author-solutions/main.cpp)
   * Problem Tester- [Sagar Pathare](https://www.linkedin.com/in/sspathare97/)
   * Tester's Solutions
     * [C++](https://github.com/cs-gpdc/code-buffer-s22-solutions/blob/main/4-bo-and-passcodes/tester-solutions/main.cpp)
   * Explanation:  
      As we can see in the table below, cost of 1, i.e.,    
      c[1] depends on both 2 and 9 since (2 + 9) % 10 = 1 and c[2] + c[9] could be less than c[1].

      * 1 = min(1, 29, 38, 47, 56)
      * 2 = min(11, 2, 39, 48, 57, 66)
      * 3 = min(12, 3, 49, 58, 67)
      * 4 = min(13, 22, 4, 59, 68, 77)
      * 5 = min(14, 23, 5, 69, 78)
      * 6 = min(15, 24, 33, 6, 79, 88)
      * 7 = min(16, 25, 34, 7, 89)
      * 8 = min(17, 26, 35, 44, 8, 99)
      * 9 = min(18, 27, 36, 45, 9)
      * 0 = min(0, 19, 28, 37, 46, 55)

      Similarly, we can see 1 depends on every other digit since c[1] = min(1, 29, 38, 47, 56).  
      Similarly, we can see every digit depends on every other digit.  
      This can be represented as a dependency graph. This forms a fully connected graph for nodes 1 to 9. However, we have circular dependencies, which is the problem.   
      The minimum cost or the shortest path for 0 could be from 1, then the shortest path for 1 could be from 2, and so on till we form a full circle, as shown in the figure.  

      ![](https://github.com/cs-gpdc/code-buffer-s22-solutions/blob/main/4-bo-and-passcodes/graph.png)
      
      In other words, 0 needs 19; 1 needs 29; 2 needs 39; 3 needs 49; 4 needs 59; 5 needs 69; 6 needs 79; 7 needs 89; 8 needs 99.  
      0 -> 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9

      The edge relaxation step here is c([(i+j)%10]) = min(c([(i+j)%10]), c[i]+c[j])  
      Now, similar to the Floyd-Warshall algorithm, since the shortest path could include all the N nodes, we need to perform the edge relaxation step at least N-1 times to make sure we explore all possible paths that could lead to a smaller distance.

      Please refer to the [Tester's Solution](https://github.com/cs-gpdc/code-buffer-s22-solutions/blob/main/4-bo-and-passcodes/tester-solutions/main.cpp) for full code.
