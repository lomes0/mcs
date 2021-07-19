###### Key Points

---

- $|\{x_1 + \cdot \cdot \cdot  + x_r = n\space | \space 1 \le x_i\}| = \binom{n-1}{r-1}$

  

- $|\{x_1 + \cdot \cdot \cdot  + x_r = n\space | \space 0 \le x_i\}| = \binom{n + r-1}{r-1}$



- oooooo----oooooooo

  $\binom{n-1}{r-1}$ will chose barriers from between the balls.

​	Therefore we only have positive solutions.

- oooooo----ooooooo

  $\binom{n + r -1}{r-1}$ is like having $n$ balls + $r-1$ **Added barriers to choose from**.



###### Errors

---

17. $2^{15}$ will give the case of one empty box as well.
18. $6^{15} - 6$ does not discard all the options of partial group



##### Questions <u>1-4</u>

---

We have $20$ balls - $2$ reds, and $18$ blues.

We pick out the balls, one at a time, until we have the two red ones.



1. What is the probability that we have picked out the first red ball after the fifth pick?

   $\mathbb{P}(\{first \space 5 \space are \space blue\})=\frac{18 \cdot \cdot \cdot14}{20\cdot \cdot \cdot 16}=\frac{14\cdot 15}{19 \cdot 20}=\frac{3 \cdot 7}{2 \cdot 19}=\frac{21}{38}$.



2. What is the probability that we have picked out the second red ball after the tenth pick?

   - $\mathbb{P}(\{second \space after \space tenth \})= 1 - \mathbb{P}(\bigcup\limits_{i\in\{2,...,10\}}{}E_i)$.

   - Where $E_i$ is the event for picking the second red ball at the i-th pick.

   - Since this events are independent, we have:

     $\mathbb{P}(\bigcup\limits_{i\in\{2,..,10\}}E_i)=\sum\limits_{i\in\{2,10\}}{\mathbb{P}(E_i)}=\binom{1}{1}\frac{2}{20}\frac{1}{19} + \binom{2}{1}\frac{2}{20}\frac{18}{19}\frac{1}{18} + \cdot \cdot \cdot \binom{9}{1}\frac{2}{20}\frac{18}{19}\cdot \cdot \cdot \frac{11}{12}\frac{1}{11}$.

     We use here the fact that $\mathbb{P}(E_i)=\sum\limits_{j=1}^{i-1}\mathbb{P}(A_j)=\binom{i-1}{1}\mathbb{P}(A_1)$.

     Where $A_j$ is the event where we picked the first red at j, and picked the second red at i.

   - $\mathbb{P}(\bigcup\limits_{i\in\{2,..,10\}}E_i)= \frac{2}{20}\frac{1}{19} \cdot (1+\cdot\cdot\cdot+9)=\frac{45}{10\cdot19}=\frac{9}{38}$.

   - $\mathbb{P}(\{second \space after \space tenth \})= \frac{29}{38}$.

   ```
   Wrong number of total choices!
   
   ​	We don't take out all of the balls.
   
   ​	We are stopping after we got the second red.
   ```

   

3. What is the probability that the second red ball picked at the thirteen-th time
   - $\mathbb{P}(\{second \space at \space thirteen\}) =\sum\limits_{i=1}^{12}\mathbb{P}(A_i)$.
   - $\{A_1,...,A_{12}\}$ are independent events.
   - $A_i$ is the event - We picked the first red at $i$, and the second red at 13. 
   - For any $1<i<12:\space\mathbb{P}(A_i)=\frac{18\cdot\cdot\cdot(18-i+2)}{20\cdot\cdot\cdot(20-i+2)}\cdot \frac{2}{20-i+1}\cdot\frac{(18-i+1)\cdot\cdot\cdot(18-10)}{(20-i)\cdot\cdot\cdot(20-11)}\cdot\frac{1}{8}=\frac{2\cdot 1}{20 \cdot 19}$.
   - $\mathbb{P}(\{second \space at \space thirteen\}) =\sum\limits_{i=1}^{12}\frac{1}{19\cdot10}=\frac{6}{95}$.



```
It's like the question about families who will have children until a male is born.

Families are grouped by where the second red ball is taken out.

We ask what is the probability to take out the second red ball.

```



4. What is the probability to remove the red balls one after the other?
   - $\mathbb{P}(\{red \space and \space red\}) = \sum\limits_{i=1}^{19}(\mathbb{P}(\{A_i\})=\frac{1}{190})$.





##### Questions <u>5-8</u>

---

$2n$ balls are randomly distributed across $n$ indexed boxes.



5. How many different distributions does the sample space has?

   o o o o o o o ---- o o o o o o o 			2n balls + n-1 barriers

   - Choose n-1 barriers: $\binom{3n-1}{n-1}$.

     This give all the different ways to assign boxes to balls.

   ```
   The balls are the same, so instead of distributing the balls to the boxes.
   
   We distribute the boxes on the balls.
   
   
   
   Balls to Boxes	 ==== 	Boxes to Balls
   ```

   $\mapsto \square \cong \square \mapsto 0$



6. How many distributions has exactly two empty boxes?

   We need exactly $n-2$ non empty boxes.

   - $x_1 + \cdot \cdot \cdot + x_{n-2} = 2n$

   - $\binom{2n - 1}{n-3}$ is the number of $n-2$ non empty boxes distributions.

   - $\binom{n}{2}$ number of ways to choose $2$ empty boxes.

     

7. How many distributions have an even amount of balls at each box?

   

   We pair the balls into couples.

   Then we calculate how to distribute the couples to boxes.

   - $\binom{n+n-1}{n-1}$

8. How many distributions has exactly $3$ sequential non-empty boxes, and all the others empty?
   - $\binom{n-2}{1}$ we pick the first non empty box.
   - $\binom{2n-1}{3-1}$ balls to three non-empty boxes.



##### Questions <u>9-12</u>

---

We randomly choose $10$ numbers from $\{-9,...,-1,0,1,...9\}$.



9. $19^{10}$
10. $\frac{19^{10}}{10!}$

11. $\binom{19}{10}$
12. $19\cdot\cdot\cdot10$



##### Questions <u>13-15</u>

---

With repeating choices, we randomly choose $10$ numbers from $\{-9,...,-1,0,1,...,9\}$.

Consider the choices to be order sensitive.



13. $18\cdot19^8$

14. - $2k\space  |\space  2k \space  | \space 2k$
    - $2k + 1 \space  |\space  2k + 1 \space  | \space 2k$
    - $2k + 1\space  |\space  2k \space  | \space 2k + 1$
    - $2k\space  |\space  2k + 1 \space  | \space 2k + 1$

    $19^7\cdot( 9^3 + 9\cdot10^2\cdot3)$

    

15. $\binom{10}{3} \cdot 7^3 \cdot 12^7$.



##### Questions <u>16-19</u>

---

Yossi randomly distributes $15$ different balls to $8$ different boxes.

16. What is the probability that all the balls will be in the same box?
    - $F:\{1,...,15\} \mapsto \{1,...,8\}$.
    - $\frac{1^{15}\binom{8}{1}}{8^{15}}$.



17. What is the probability that all the balls will be in exactly two boxes?

    - $\frac{\binom{8}{2}\cdot (2^{15}-2)}{8^{15}}$.

18. Exactly two empty boxes?

    - $\mathbb{P}(\{ exactly \space two \space empty\})=\sum\limits_{i_1<i_2}{\mathbb{P}(E_{i_1,i_2}\cap D_{i_1,i_2})}$
    - The total number of options is $8^{15}$.
    - A is the number of options where exactly two are empty is:
      - Pick Two to be Empty x Make sure the others are not empty
      - $\binom{8}{2} \times$ distribute the balls to six chosen boxes.
      - $\binom{8}{2} \times$ ($\bigcup$ one of six is empty, the others may or may not)$^{c}$.
      - Where the complement above is taken relatively to the subset. 
    - $\bigcup$ one of six is empty, the others may or may not = $\sum\limits_{i=1}^{6}{(-1)^{k+1}\times\binom{6}{i}\times}(6-i)^{15}$
    - A = $\binom{8}{2} \times (6^{15} - \sum\limits_{i=1}^{6}{(-1)^{k+1}\times\binom{6}{i}\times}(6-i)^{15})$.





19. R=B=Y=G

    - Independent Events

    - $\frac{\binom{15}{0}\binom{0}{0,0,0,0}4^{15}+\binom{15}{4}\binom{4}{1,1,1,1}4^{11}+\binom{15}{8}\binom{8}{2,2,2,2}4^{7}+ \binom{15}{12}\binom{12}{3,3,3,3}4^{3}}{8^{15}}$



---



20. $8$ males, $12$ females.

    We pick $6$, then each of them goes to one of the rooms $\{1,...,6\}$.

    What is the probability that only room $1$ will have a male?

    We assume the male and female are different.

    $\frac{\binom{8}{1}1!\cdot\binom{12}{5}5!}{\sum\limits_{i=0}^{6}{\binom{8}{i}\binom{12}{6-i}6!}}$.

    If they are not different.

    $\mathbb{P}(\{one\space male\}\cap\{box\space one\})$.

    We can take the union, and use the fact that the events are independent.

    $=\sum\limits_{i=1}^{6}{\mathbb{P}(\{one \space male \space \and \space at \space i\}\cap\{male \space to \space 1\})}$.

    $=\sum\limits_{i=1}^{6}{\frac{8\cdot12\cdot\cdot\cdot8}{20\cdot19\cdot\cdot\cdot15}}=\frac{44}{1615}$.

