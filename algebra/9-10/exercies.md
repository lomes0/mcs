###### M13 | 10.1.2016

----

1. For $2<n$, find $D_n/D^{'}_n$ and determine whether it is cyclic or not.

   <u>Denote</u>

   - A quotient group $G/H$ is ablien $\Leftrightarrow$ H contains the commutator subgroup $G^{'}$.

     

   $D_n/[\sigma] \cong C_2$.

   $\Rightarrow D_n/[\sigma]$ ablien. 

   $\Rightarrow D^{'}_n \subseteq [\sigma]$.

   $\Rightarrow D^{'}_n$ is a subgroup of the cyclic group $[\sigma]$, hence is cyclic in itself.

   

   For $a=\tau\sigma^{-i},b=\tau\sigma^{-j}: a^{-1}b^{-1}ab=\sigma^i\tau\sigma^j\tau\tau\sigma^{-i}\tau\sigma^{-j}=\sigma^{2(i-j)}$.

   For $a=\tau\sigma^{-i},b=\sigma^{-j}: a^{-1}b^{-1}ab=\sigma^i\tau\sigma^j\tau\sigma^{-i}\sigma^{-j}=\sigma^{-2j}$.

   $\Rightarrow [\sigma^2] = D^{'}_n$.

   - If $2\nmid n$, then we have $[\sigma^2] = [\sigma]$, and $D_n/D^{'}_n \cong C_2$.
   - If $2\mid n$, then $D_n/D^{'}_n \cong C_2\times C_2$.



2. Let $N \triangleleft G$ some normal subgroup, and $[G:N] = 5776$. Show G has a subgroup of index 2.

   <u>Denote</u>

   - If $G$ is a p-group of order $p^m$, then G contains a subgroup of order $p^k$ for any $k<m$.

     

   $5776=2^5*19^2$ by the virtue of Sylow's theorems, there is exactly one subgroup of order $19^2$ in $G/N$, denote it $N^{'}_1$.

   Since all Sylow-p subgroups are conjugates, then $N^{'}_1 \triangleleft G/N$.
   
   By the correspondence theorem, let there be $N \subset N_1 \triangleleft G$, s.t $[G:N_1]=[G/N:N^{'}_1]=2^5$.
   
   Using *Cauchy*, $G/N_1$ has a subgroup of order $2^4$, and by the correspondence theorem, we deduce $G$ has a subgroup of index 2.



3. Let $G$ be a group, with no subgroups of index 2 or 3. Show that $G$ has no subgroup of index 4.

   

   Equivalently, we show that if $G$ has a subgroup of index 4, then $G$ has a subgroup of index 2 or 3.

   Let $H < G$ be a subgroup of index 4, i.e $[G:H] = 4$.

   Denote $T = \{gH:g \in G\}$  = the left co-sets  of G/H, and $S_T$ the permutation group on $T$.

   Take the natural homomorphism $\varphi:G \mapsto S_T$. Note that $(G)\varphi < S_T$, hence $|(G)\varphi| \mid 4!=2^3*3$.

   Assume $|(G)\varphi|=2^i*3^j$ for some $i,j \in \N$. We cannot have $i=j=0$, since $H$ is real subgroup of $G$.

   We divide to cases, and use $Cauchy +Correspondence +Sylow$  to show there must be a subgroup of $G$ with index 2 or 3.
   
   

4. $Z_{n+1}(G) = \{x \in G | y \in G \to x^{-1}y^{-1}xy \in Z_n(G) \}$ where $Z_0(G) = {e}, Z_1(G) = C(G)$.

   $(a)$ Show that $Z_{n+1}(G)/Z_{n}(G) = C(G/Z_n(G))$.

   <u>Denote</u> *We assume inductively that $Z_n(G)$ is a subgroup, hence for $a,b \in Z_n(G)$ we have $ab \in Z_n(G)$*.

   Let us have $h \in G, x \in Z_{n+1}(G)$. We want to show $h^{-1}xh \in Z_{n+1}$.

   For any $y\in G: (h^{-1}xh)^{-1}y^{-1}(h^{-1}xh)y=(h^{-1}x^{-1}h)(hy)^{-1}x(hy)=(h^{-1}x^{-1}hx)(x^{-1}(hy)^{-1}x(hy))$. 

   We have that $(h^{-1}x^{-1}hx), \space (x^{-1}(hy)^{-1}x(hy)) \in Z_{n}(G)$.

   $\Rightarrow (h^{-1}xh)^{-1}y^{-1}(h^{-1}xh)y \in Z_n(G)$, And therefore $h^{-1}xh \in Z_{n+1}(G)$.

   Now we have $Z_{n+1}(G) \triangleleft G$ for any $n \in \N$. Next, we show that $Z_n(G) \triangleleft Z_{n+1}(G)$.

   We only need to show that $Z_n(G) \subseteq Z_{n+1}(G)$, since $Z_n(G)$ is known to be normal in $G$.

   Let us have $x \in Z_n(G), y \in G$. Then $x^{-1} \in Z_n(G)$, and $y^{-1}xy \in Z_n(G)$ since $Z_n(G)$ is normal.

   Then $x^{-1}y^{-1}xy \in Z_n(G)$, and therefore $x \in Z_{n+1}(G)$.

   We established that $Z_n(G) \triangleleft Z_{n+1}(G), Z_n(G) \triangleleft G$, and we can know prove that $Z_{n+1}(G)/Z_{n}(G) = C(G/Z_n(G))$.

   Let us have $g \in G$, then we have:

   $gZ_n(G) \in C(G/Z_n(G)) \Leftrightarrow \forall h\in G: gZ_n(G)hZ_n(G)(gZ_n(G))^{-1}(hZ_n(G))^{-1} = eZ_n(G) \Leftrightarrow ghg^{-1}h^{-1}Z_n(G) = eZ_n(G)$.

   Therefore, $gZ_n(G) \in C(G/Z_n(G)) \Leftrightarrow \forall h\in G: g^{-1}h^{-1}gh \in Z_n(G) \Leftrightarrow gZ_n(G) \in Z_{n+1}(G)/Z_n(G)$.

   

   $(b)$ If $o(G) = p^m$ for some prime $p \in \N$, then $Z_m(G) = G$.

   Notice that for any $k \in \N < m$, $G/Z_k(G)$ is a p-group, hence $C(G/Z_k(G))$ is non-trivial. Beside on $(a)$, we deduce 

   have that $Z_{k+1}(G)/Z_k(G)$ is non-trivial, and particularly $Z_k(G) \subsetneq Z_{n+1}(G)$.

   We have $Z_1(G) \subsetneq Z_2(G) \subsetneq ... \subsetneq Z_m(G)$. Meaning $|Z_1(G)| < |Z_2(G)| < \cdot\cdot\cdot < |Z_m(G)|$.

   Since $G$ is a p-group, then $Z_1(G) = C(G)$ is non trivial, and we must conclude that $|Z_m(G)| = |G|$. Meaning $Z_m(G) = G$.
   
   

5. $G = SL(2,3) = \{\begin{pmatrix} a & b \\ c & d \\ \end{pmatrix} | \space ab - cd = 1;\space a,b,c,d \in \Z_3\}$.

   $(a)$ Show that $G$ is a subgroup of the $GL(2,3)$.

   Straight forward using the determinant properties.

   

   $(b)$ Show that $|G|=24$.

   Let us have $n,p \in \N$, where $p$ is prime. We want to calculate $o(GL(n,p)), o(SL(n,p))$.

   Assume we are constructing an invertible square matrix over $\Z_p$. Then there are $p^n - 1$ choices for the first row. And there are $p^n - p$ choices for the second row. Similarly, the two independent vectors selected for the first and second row, generates $p^2$ we must exclude from the third row. Therefore, there are $p^n - p^2$ choices for the third row.

   We have then $|GL(n,p)| = \prod\limits_{0\le i < n}(p^{n}-p^{i})$.

   We know wish to calculate $o(SL(n,p))$.

   ----

   <u>Lemma #1</u>: $S_k = \{A \in GL(n,p)\space |\space det(A) = k\}$. Then for any $k,m \in \Z_p \setminus\{0\}$ we have $|S_k| = |S_m|$.

   <u>Remarks</u>

   - $p \in \N$ is prime, hence $\Z_p$ a field.

     

   For some $0\neq a,b \in \Z_p$, choose the unique $0 \neq t \in \Z_p$ for which $ta=b$. $t$

   Now, for any matrix $B \in S_t$, and for any matrix $A \in S_a$ we have $BA \in S_b$.

   And since each $A\in S_a$ is invertible, then for any $B_1,B_2 \in S_t, A\in S_a: B_1A = B_2A \Leftrightarrow B_1=B_2$.

   We deduce that $|S_t| \le |S_b|$.

   The unique $0\neq t\in \Z$ we mentioned earlier is given by $t = ba^{-1}$. Set $0 \neq b \in \Z_p$, and notice that for any $0\neq a_1,a_2 \in \Z_p: ta_1=ta_2 \Leftrightarrow a_1=a_2$, where $t = (ba_1^{-1})$. And this is since $\Z_p$ is a filed. Therefore, any $0 \neq a \in \Z_p$ gives a unique $0 \neq t\in \Z_p$, and for any $t$ there is a unique $a$.

   Since $0\neq b \in \Z_p$ was chosen arbitrarily, we have $|S_t|\le |S_b|$ for any $0\neq t,b \in \Z_p$, and also $|S_t|=|S_b|$.

   ---

   Using <u>Lemma #1</u>, we have that:
   $$
   |S_k| = \frac{|GL(n,p)|}{p-1}=\frac{\prod\limits_{0\le i < n}(p^{n}-p^{i})}{p-1}=\frac{p^n - 1}{p-1}\cdot\prod\limits_{1\le i < n}(p^{n}-p^{i})=\sum\limits_{1 \le i \le n}p^{n-i}\cdot \prod\limits_{1\le i < n}(p^{n}-p^{i})
   $$
   We conclude:
   $$
   |GL(n,p)| = \prod\limits_{0\le i < n}(p^{n}-p^{i})
   \\ |SL(n,p)| = \sum\limits_{1 \le i \le n}p^{n-i}\cdot \prod\limits_{1\le i < n}(p^{n}-p^{i})
   $$
   And for $n=2,p=3$:
   $$
   |GL(2,3)| = (3^2 - 3^0)(3^2 - 3^1)=8\cdot6=48
   \\ |SL(2,3)|=(3^{2-1} + 3^{2-2})\cdot(3^2-3^1)=4\cdot6=24
   $$
   

   $(c)$ Show $SL(2,3)$ is non-ablien.

   Simply pick any two matrices which don't commute with each other.

   

   $(d)$ Show that $SL(2,3)$ has a unique Sylow-2 subgroup, isomorphic to $Q_8$.
   
   You are welcome to check that:
   $$
   \{\begin{pmatrix}
   2 & 0 \\
   0 & 2 \\
   \end{pmatrix}, \begin{pmatrix}
   0 & 2 \\
   1 & 0 \\
   \end{pmatrix},
   \begin{pmatrix}
   1 & 1 \\
   1 & 2 \\
   \end{pmatrix},
   \begin{pmatrix}
   2 & 1 \\
   1 & 1 \\
   \end{pmatrix}\}
   $$
   generates a subgroup isomorphic to $Q_8$, where $\{-1,i,j,k\}$ are respectively mapped to the matrices displayed at$(4)$.

   You are also welcome to check that this subgroup is normal, hence it is a unique Sylow-2 subgroup.

   $(e)$ How many Sylow-3 subgroups does $SL(2,3)$ has?

   

   Denote $\eta_3$ - number of Sylow-3 subgroups. By Sylow Theorem, we must have $\eta_3 \in \{1,4\}$. This is since $\eta_3 \mid 8 \space \and \space \eta_3 \equiv 1 \space mod\space 3$.

   Note that a Sylow-3 subgroup of $SL(2,3)$ is cyclic, hence every two different Sylow-3 subgroups must intersect trivially. And every element of order $3$ in $SL(2,3)$ generates a Sylow-3 subgroup.

   Now, one can easily check that $SL(2,3)$ has at least two different elements of order $3$. Hence $1 < \eta_3$, and therefore $\eta_3 = 4$.

   

   $(f)$ Show that $S_4$ has a Sylow-2 subgroup isomorphic to $D_4$.

   $<(1,2,3,4),(1,3)>$ is a subgroup of $S_4$ isomorphic to $D_8$. You are welcome to check.

   

   $(g)$ Conclude that $SL(2,3)$ is not isomorphic to $S_4$.

   Indeed, we found that $SL(2,3)$ has a unique Sylow-3 subgroup, isomorphic to $Q_8$, hence it does not have any subgroup of order $8$ isomorphic to $D_4$. That is since all Sylow-p subgroups are conjugate to one another, and $Q_8, D_4$ are not isomorphic.

   If $SL(2,3)$ where isomorphic to $S_4$, than it would have had a subgroup isomorphic to $D_4$, which is not possible has we explained. Hence, $SL(2,3), S_4$ are not isomorphic.

   
   
   
   
   
   
   ​	



###### MM13 | 22.01.2017

----

4. $p \in \N$ is prime, and $P$ is a Sylow-p subgroup of $S_n$.  Show that $P$ is ablien $\Leftrightarrow n < p^2$.

   <u>Denote</u>

   - All Sylow-p subgroups are isomorphic to one another.
   - Any p-subgroup is contained in some Sylow-p subgroup.

   

   If $n < p^2$, we find an ablien Sylow-p subgroup.

   If $n=p^2$, we find a non-ablien Sylow-o subgroup.

   If $p^2 < n$, then $S_n$ has a subgroup isomorphic to $S_{p^2}$, which has a non-ablien p-subgroup. This non-ablien p-subgroup is contained in some Sylow-p subgroup. Hence, we found a non-ablien Sylow-p subgroup.

   

   Assume $n<p^2$.

   Notice that $n!=1 \cdot 2 \cdot\cdot p\cdot\cdot(p+1) \cdot \cdot \cdot kp\cdot\cdot n $, for some $k\in \N$.

   This $k \in \N$ is the largest natural number to satisfy $kp \le n$.

   Then any Sylow-p subgroup of $S_n$ is of order $p^k$.

   Denote some subgroup $H_{p^k}=<(1,...,p),(p+1,...,2p),...,((k-1)p + 1,...,kp)>$.

   $H$ is a subgroup of order $p^k$, and is clearly ablien.

   

   Assume $n=p^2$ .

   Then any Sylow-p subgroup of $S_n$ is of order $p^{p+1}$.

   Denote $H_{p^p}=<(1,...,p),(p+1,...,2p),...,((k-1)p + 1,...,p^2)>$.

   $H_{p^p}$ is an ablien subgroup of order $p^p$. More over, it is a real subgroup of some Sylow-p subgroup, denote it $H_{p^{p+1}}$.

   However, for any $H_{p^p}$ cannot be extend to a larger ablien subgroup, hence $H_{p^{p+1}}$ is non-ablien.

   
   
5. Let $G$ be a group for which:

   - $|G|=5776$.
   - $|\{g\in G \space | \space o(g)=19\}| < 360$.

   Show that $G$ has normal subgroup of order $19$, and a subgroup of order $76$.

   <u>Denote</u>

   - $5776=76^2=2^4\cdot19^2$.
   - $19^2=361$.
   - $76=4\cdot19$.

   Denote $\eta_{19}$ the number of Sylow-19 subgroups in $G$.

   And since $\eta_{19} \mid 2^4 \and \eta_{19}\equiv 1mod(19)$, we must have $\eta_{19} = 1$, and therefore we have a $H_{19} \triangleleft G$, a Sylow-19 normal subgroup.

   Now, since $H_{19}$ is a p-group, for $p=19$, there exists $K \triangleleft H_{19}$ of order $19^{2-1}=19$.

   Assume there is no normal subgroup of order 19, then $1 < [G: N_{G}(K)]$, meaning that $K$ is conjugate to at least one more subgroup, denote it $K^*$.

   

   - $|KK^{*}| = 19^2$. Since $K\cap K^{*} = \{e\}$.

   - $K^{*} < H_{19}$. Since all 19-subgroups are contained in some Sylow-19 subgroup, and $\eta_{19} = 1$.

   - $K,K^{*} \triangleleft H_{19}$. Otherwise, assume $K$ is not a normal subgroup. Then $[H_{19} : N_{H_{19}}(K)] > 1 \and |N_{H_{19}}(K)| \in \{19,19^2\} $.

     So we get $[H_{19} : N_{H_{19}}(K)] = 19$, and this result is false. *TODO:: Explain why the result is not true* .

   

   We have now that $H_{19} \cong K\times K^{*}$, and therefore we have $360$ elements of order $19$ in $H_{19}$, which contradicts what was given on $G$.

   ​	

   For the next part, we show there is a subgroup of order $76$.

   By Sylow Theorem, let there be a subgroup $T < G$ of order $2^2=4$. We want to show that $TK$ is the subgroup of order 76.

   Since, $K \triangleleft G$ then $KT=TK$, hence $TK < G$. 

   Since $(4,19) = 1$, we have $T \cap K=\{e\}$. And we have $|TK|=|T||K|=4*19$.




###### M13 | 26.1.20

----

1. Let $G$ be a group, $A< G$ a non-trivial subgroup, s.t for any $g \in G \setminus A: o(g)=2$.

   $(a)$ Show that for any $a\in A, g\in G\setminus A:g^{-1}ag=a^{-1}$.

   ​	Indeed, we have that $g^{-1}ag=a^{-1} \Leftrightarrow (ga)^2=e$, so it suffices to show that $ga \in G\setminus A$, which is clearly true.

   $(b)$ Show that $A$ is ablien.

   ​	Let $a,b \in A, g\in G\setminus A$. Using the section (a), we drive:

   ​	$ab=ba \Leftrightarrow a^{-1}b^{-1}ab=e \Leftrightarrow (g^{-1}ag)(g^{-1}bg)ab=e \Leftrightarrow (ab)^{-1}ab=e$

   ​	Therefore $A$ is ablien.

   $(c)$ Let $B < A$ and show $B \triangleleft G$.

   ​	$A$ is ablien, so for any $a\in A$, we have $a^{-1}Ba = B$.

   ​	Let $g\in G\setminus A$, then for any $b\in B: g^{-1}bg=b^{-1} \in B$.

   ​	Therefore $B \triangleleft G$.

   $(d)$ Show that $[G:A] = 2$.

   ​	*UNSOLVED*

   ​	Denote $\nu:G \mapsto S_{G/A}$ the natural homomorphism given by $g \mapsto \varphi_{g}, (kA)\varphi_{g}=g(kA)$.

   ​	We know that $ker(\nu) = A$, since $A\triangleleft G$, and $ker(\nu)$ is the maximal normal subgroup of $G$ which is contained in $A$.

   ​	$\Rightarrow G/A \cong S_{G/A}$.

   

2. Let $G$ be an ablien group, and $H<G$ a proper maximal subgroup.

   $(a)$ Show that $[G:H]$ is a prime number.

   ​	Since $G$ is ablien, then $H \triangleleft G$.

   ​	Assume $[G:H]$ is not prime, and denote $\varphi:G \mapsto G/H$ the natural epi-morphism.

   ​	<u>Case 1</u>: $[G:H] \in \N$, and $[G:H]$ is not prime.

   ​	We have $1 < o(G/H) \in \N$ and is not prime. By Sylow, there is a non-trivial and proper subgroup $\bar{K} < G/H$.

   ​	By the correspondence theorem, there is non-trivial, proper sub-group $K < G$, for which $H$ is real subgroup.

   ​	$\Rightarrow$ $H$ is not a maximal subgroup. A contradiction.

   ​	<u>Case 2:</u> $[G:H] =\infin$

   ​	We repeat the same step as in <u>Case 1</u>.

   $(b)$ Show that $(\Q,*)$ does not contain proper maximal subgroup.

   ​	We know that the primes are a minimal generating set of $(\Q, *)$. And any subgroup $H$ is generated be some subset of the 

   ​	primes. Therefore, for any real subgroup $H<(\Q,*)$ to be maximal, we must have some unique prime $p \in \N$ s.t $p$ is the 

   ​	only prime for which $p \notin H$.

   ​	So, let $H$ some candidate for a maximal subgroup. $H$ is some real subgroup of $(\Q, +)$, and $p \in \N$ the only prime for which 	$p\notin H$. 

   ​	We claim that for any $m\neq n\in \N$ we have $p^nH \neq p^mH$, hence $[G:H] = \infin$, and by section $(a)$ we deduce that $H$ is not 

   ​	maximal.

   ​	Let $n\neq m \in \N$, and notice that $p^n \in p^nH$. And for any $k\in H: p^m + k = p^n \Leftrightarrow -k = p^{n-	m} \neq 1$.

   ​	It's clear that for any $k \in H: k \neq p^{n-m}$, otherwise we have $\sum\limits_{i\in I}{r_{i}q_i^{k_i}} = p^{n-m}$ for primes $\{q_i\}_{i\in I}$ different from $p$.

   $(c)$ 
