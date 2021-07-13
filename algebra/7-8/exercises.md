###### M12 | 25.12.2016

------

2. Let $G=[a,b]$ be a finite Group, $o(a)=o(b)=2$, and $o(ab)>2$.

   Show that $G \cong D_n$ for some n.

   <u>Proof</u>

   Note $k=o(ab)$.

   Define a mapping $\varphi:D_k \mapsto G$ by:

   * $(\sigma)\varphi=ab$.
   *  $(\tau)\varphi=a$.
   * $(\sigma^i\tau)\varphi = (ab)^{i}a$

   We fire show that $\varphi$ is homomorphism.

   $(\sigma^i\tau\sigma^j\tau)\varphi=(\sigma^{i-j})\varphi=(ab)^{i-j}$

   $(\sigma^i\tau)\varphi(\sigma^j\tau)\varphi=(ab)^{i}a(ab)^{j}a=(ab)^{i}b(ab)^{j-1}a=(ab)^{i-1}a(ab)^{j-1}a=...=(ab)^{i-j}aa=(ab)^{i-j}$

   Then $\varphi$ a homomorphism, and we need to show that $\varphi$ is 1-1 and onto.

   $\varphi$ is clearly onto, since $\{a,b\} \subseteq Im\varphi$.

   $ker(\varphi) = \{\sigma^0\}$ since, $\sigma^i \in ker(\varphi) \Leftrightarrow i=o(ab)=k$ and $o((ab)^ia)=2$ for any $i$.

   

   We see that $G \cong D_k$.

   

3. G is a finite group, $3 \nmid |G|$ , $(ab)^3=a^3b^3$ for any $a,b \in G$.

   1. Show that $\phi:G \mapsto G$ defined by $(x)\phi=x^3$ is an isomorphism.

      Since G is finite, it suffice to show that G is 1-1 and a homomorphism.

      

      $(xy)\phi=(xy)^3=x^3y^3=(x)\phi(y)\phi$. 	## Based on $(ab)^3=a^3b^3$

      So $\phi$ is homomorphism.

      

      $(x)\phi=(y)\phi \Rightarrow x^3(y^{-1})^3=e \Rightarrow (xy^{-1})^3=e$. 	## Based on $(ab)^3=a^3b^3$.

      But $3 \nmid |G|$, hence $xy^{-1}=e$.

      So $\phi$ is 1-1.

      

   2. $x^2y^3=x^{-1}x^3y^3=x^{-1}(xy)^3=yxyxy=yxyxyxx^{-1}=(yx)^{3}x^{-1}=y^3x^2$

      So $x^2y^3=y^3x^2$.

      Since $y \mapsto y^3$ is isomorphism, we also have $a^2b=ba^2$ for any $a,b \in G$.

      $\forall a,b \in G: a^2b=ba^2$.

      

   3. let $a,b \in G$.

      By (2) we have: $a^2b^2=b^2a^2$.

      $\Rightarrow ababab=(ab)^3=a^3b^3=aa^2b^2b=ab^2a^2b \\ \Rightarrow ababab = abbaab \\ \Rightarrow ab=ba$

      Hence $G$ is ablien.

      

4. Let $H,K<G$ subgroups of finite index. Then $[G:H\cap K] \le [G:H][G:K]$.

   If $n=[G:H],m=[G:K]$ and $(n,m)=1$, then $[G:H\cap K] = [G:H][G:K]$.

   

   <u>Proof</u>

   We have $aH\cap K \neq bH\cap K \Leftrightarrow aH \neq bH \or bH \neq bK$.

   Therefore there are at most $nm$ possibilities for $H\cap K$ co-sets.



​		Assume $[G:H\cap K] < nm$.

​		Note $d = [G:H\cap K]$, and take $a,b \in \mathbb{N}$ s.t $d=ma=nb$. (They exists since $H\cap K < K,H$).

​		Now, $ma=d < mn \Rightarrow a < n$.

​		If $(n,m)=1$, then $n\mid a$ since $ma=nb$.  So we have $n \le a$, which is a contradiction.

​		We conclude that if $[G:H\cap K] < nm$, then $(n,m) > 1$.

​		Therefore, if $(n,m) = 1$ then $[G:H\cap K] = nm$.



5. There are only two groups of order 10 - $C_{10}, D_{5}$.

   <u>Proof</u>

   Let G be a cyclic group of order 10.

   If G is cyclic then we are done.

   Else, by Lagrange, any $e\neq g \in G$ is of order 2 or 5.

   

   Pick non-unity elements $g_1\neq g_2 \in G$, if one of them is of order 2, denote him $h$.

   Else, $<g_1> \cap <g_2> = \{e\}$, and we have some $h \in G \setminus <g_1> \cap <g_2>$ and $h$ must be of order 2, as $G$ is of order 10.

   Denote $g \in G$ of order 5,. If no such $g \in G$ exists, then $G$ any non-trivial element is of order 2, and $G$ is of uneven order.

   

   $[G : <g>] = 2, h \notin <g>$, so $G=<g> \cup \space h<g>$. And we must have for any $0 \le i \le 4, g^ih=hg^j$ for some other $0 \le j \le4$.

   We show that $gh=hg^4$ and $g^2h=hg^3$, then we can conclude $G\cong D_5$.

   

######  M12 | 10.12.2017

------

1. If $G$ is a finite group G of uneven, then any $g \in {G}$ is a square.

   <u>Proof</u>

   Denote $2k+1 = |G|$, then any $g \in G$ satisfies: 
   $$
   g = g^{2k+1}g = (g^{k+1})^{2}
   $$
   Hence $g$ is a square of $g^{k+1}$.

   ##### <u>Notes</u>

   * for any $g \in G$, we have $g^{|G|} = e$.

   

2. **Any finitely generated subgroup of $(\mathbb{Q}, +)$ is acyclic subgroup**.

   <u>Proof</u>

   Denote $H = [\frac{n_{1}}{m_1},...,\frac{n_{k}}{m_k}]$ some finitely generated subgroup.

   Note $m=lcm(|m_1|,...,|m_k|)$, and consider the subgroup $K=[\frac{1}{m}]$.

   For any $i$ we have that $\frac{n_i}{m_i}=\frac{l}{l}\times\frac{n_i}{m_i}=\frac{ln_i}{m}$ for some $l \in \mathbb{Z}$, and therefore $\frac{n_i}{m_i} \in K$.

   We deduce that $H \subseteq K$, as K contains the generating set of H.

   We conclude that H is a cyclic subgroup, as it contains within the cyclic subgroup $K$.

   ##### <u>Notes</u>

   * If $H < G$, and $G$ is cyclic, then $H$ is cyclic as well.

     

3. **G is a finite group. Show that $\gamma_k = \varphi(k)\mu_k$**, where:

   * $\gamma_k =$  number of elements of order k in G
   * $\mu_k =$  number of cyclic subgroups of order k
   * $\varphi$ is Euler function

   <u>Proof</u>

   $K =$  all elements of order k in $G$.

   $\{K_1,...,K_m\} = $ all cyclic subgroups of order k in $G$.

   For any $i<j$, we have $K \cap K_i \cap K_j = \empty$, otherwise $K_i=K_j$.

   And for any $k \in K$, there is some $i$ for which $[k] = K_i$.

   So we have $K = \bigcup\limits_{i=1}^{m} K_i (disjoint).$

   And therefore $|K| = |\bigcup\limits_{i=1}^{m} K_i (disjoint)| = \bigcup\limits_{i=1}^{m} |K_i|=\bigcup\limits_{i=1}^{m} \varphi(k)=\varphi(k)\mu_k$.

3. **If G is a finite group, and all cyclic subgroups are of different order, then G is cyclic**.

   <u>Proof</u>

   Denote $|G| = N$.

   If we count the elements of G, we get: $N=\sum \limits_{k|N} \varphi(k)\mu_k$.

   By Euler Theorem, we also have $N=\sum \limits_{k|N} \varphi(k)$.

   It's given that for any $k$ we have that $\mu_k\le1$.

   

   Therefore,  $0=\sum \limits_{k|N} \varphi(k)(1-\mu_k)$, and since $\varphi(N)>0$ we must have $\mu_N=1$.

   ##### Notes

   * **Euler** $N=\sum \limits_{0<k|N} \varphi(k)$ 

5. G is a group, H a subgroup with finite index, $[G:H]=n$. Then for any $a\in G$, $H \cap \{a^1,...,a^n\}\neq\empty$.



M12 | 25.12.2016

------

2. $\tau,\sigma:Z_{101} \mapsto Z_{101}$ are defined by:

$$
(k)\sigma = \overline {k+1}
\\ (k)\tau = \overline{41k}
$$

1. $(k)\sigma^{-1} = \overline {k-1}$

   $(k)\tau^{-1} = \overline{69k}$

2. $(k)\tau^{-1}\sigma\tau=\overline{(69k + 1)41}=\overline{69*41}*\overline{k} + \overline{41}=\overline{k} +\overline{41}=(k)\sigma^{41}$.

3. It's fairly easy to see $[\sigma]\in Aut(Z_{101})$ is a cyclic subgroup of order 101.

   $[\tau] \in Aut(Z_{101})$ is cyclic as well. Let's find out what its order.

   $41\equiv1 \space mod(101)$



3. 1. How different generators does $C_{30}$ have?

      A cyclic group $C_n$ is generated by $g \in Cn$ $\Leftrightarrow$ $(|g|, n)=1.

      $\varphi(30)=\varphi(2*3*5)=\varphi(2)\varphi(3)\varphi(5)=1*2*4=8$.

      Therefore $C_{30}$ has 8 different generators.

   2. How many subgroups does $C_{30}$?

      $30=2*3*5$, and $C_{30}$ has a unique subgroup for each $k\mid n$.

      $8=2*2*2$ = $|\{k\mid n\}|$.

      So there are 8 different subgroups of $C_{30}$.

   3. How many homomorphisms are there from $C_{30}$ to $C_{2020}$?

      Let $g\in C_{30}$ be a generator.

      A homomorphism $\phi$ from $C_{30}$ to $C_{2020}$ is defined by the mapping of $g$.

      If $(g)\phi=z$, then we have $(g)\phi^{30}=z^{30}=\phi(g^{30})=e$.

      So we have $o(z) \mid 30$, and by Lagrange $o(z) \mid 2020$.

      

      $30=2*3*5$.

      $2020=2^2*5*101$.

      We have then $o(z) \mid 10=(30,2020)$.

      How many $z\in C_{2020}$ hold $o(z) | 10$?

      Any $z\in C_{2020}$ for which $z\in H<C_{2020}$, where H is the unique subgroup of order 10.

      On the other hand, if $z\in C_{2020}$ and $o(z) \mid 10$, then $[z] < H < C_{2020}$. So $z \in H$.

      We have then $10=(30,2020)$ elements, for which $(z) | 10$.

      

      Consider now some $z\in C_{2020}$ with $o(z) | 10$.

      We wish to show $(g^k)\phi=z^k$ defines a homomorphism. It's not hard to verify the homomorphism part.

      We still need to show that $\phi$ is well defined. Meaning, if $g^{k}=g^m$ in $C_{30}$ then $z^k=z^m$ in $C_{2020}$. 

      

      We conclude there are 10 different homomorphisms from $C_{30}$ to $C_{2020}$.

      In general, $|\{\phi:C_n \mapsto C_m | homomorphism\}| = \{z \in C_m | \space o(z) \mid (n,m)\} = (n,m)$.

###### 	Notes

	1.  A cyclic group $C_n$ has one subgroup of order k, for each $k \mid n$.
	2.  The number of different elements of order k in a subgroup $G$, is $\mu_k*\varphi(k)$.
	3.  Conclusion, Number of Homomorphisms from $C_n$ to $C_m$ is $(n,m)$.



###### Appendix

------

9. **Let G a group satisfying $Aut(G) = \{Id\}$. Show that G is abelian, and $g^2 = e$ for all $g \in G$**.

   If $Aut(G) = \{e\}$, then the inner automorphism holds $\varphi_{g} = Id$.
   So for any $g,h \in G$ we have $ghg^{-1}=h$, hence $gh=hg$. Then G is abelian.

   Note now that G is abelian, therefore, the transformation $\phi:G \mapsto G$, given by   $(g)\phi = g^{-1}$ is a morphism. Since $(gh)\phi=h^{-1}g^{-1}=g^{-1}h^{-1}=(g)\phi(h)\phi$.
   Therefore $\phi$ is an isomorphism, and we have $\phi = Id$.
   Therefore for any $g \in G$, $g = g^{-1}$, and $g^{2} = e$.



###### Lecture

------



G is a finite group, and $G=H_1 \bigcup H_2 \bigcup H_3$, for some subgroups $H_1,H_2,H_3<G$.

Then $2 \mid o(G)$.

<u>Proof</u>

With no loss of generality, assume $o(H_3) \le o(H_2) \le o(H_1)$.

And we get:
$$
1 < \frac{o(G)}{o(H_1)} < \frac{o(H_1) + o(H_2) + o(H_3)}{o(H_1)}< 3
$$
Hence $[G:H_1]=2$, and $2\mid o(H_1)\mid o(G$).



------



G is a finite group, $[G:C] = 2$ for $C < G$, then for any $H<G$:

1. $H < C$
2. $o(H \cap C)=\frac{1}{2}H$

<u>Proof</u>

If $H<C$ we are done. Assume otherwise, then:

$o(G)=o(HC)=\frac{o(H)o(C)}{o(H\cap C)}$

$\Rightarrow o(H\cap C)=\frac{1}{2}o(H)$.



------



Find the subgroups of $D_n$.

<u>Solution</u>

$D_n = [\sigma,\tau]$, and $[D_n:[\sigma]] = 2$. Using the previous statement, we deduce:

$\{[\sigma^i] \space | \space i \le n\} \space \bigcup \space \{[\sigma^i, \tau] \space | \space i \le n\}$.
