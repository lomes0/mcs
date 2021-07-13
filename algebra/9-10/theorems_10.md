###### Cauchy weak version

---

Let $G$ be a finite ablien group, and a prime $p \in \N$ s.t $p \mid |G|$. Then there exists $a\in G$ with $o(a)=p$.

<u>Proof</u>

By induction on $o(G)$.

If $o(G) \le 2$ then the statement is clearly true.

Assume the statement is true for any group of order strictly less than $o(G)$.

If $G$ is cyclic then statement is known to be true. Assume $G$ is non-cyclic, and pick some $e\neq g\in G$.

If $p \space | \space o(g)$, we use the induction hypothesis on $[g]$, and finish the proof.

Else we have $p\nmid o(g)$ and $p \mid o(G/[g])$. And since $G$ is ablien, then $[g] \triangleleft G$, and the induction hypothesis holds for $G/[g]$. Denote $h[g] \in G/[g]$, and element of order $p$, for some $h \in G$.

By the correspondence theorem, there is some $H < G$ s.t $[G:H]= [G/[g]: h[g]]= \frac{o(G)}{o(g)*p}$, meaning $o(H)=o(g)*p$.

If $H$ is a proper subgroup of $G$, then we use the induction hypothesis on $H$, and finish the proof.

Else, $[G:H]=1=\frac{o(G)}{o(g)*p}$, meaning that $o(G/[g]) = p$. Therefore $G/[g]$ is cyclic of order $p$.

Take some $x \in G\setminus[g]$, and we have $o(x[g]) = p$ and $(x[g])^{o(x)} = e[g]$. Therefore $p \mid o(x)$ and we have $o(x^{\frac{o(x)}{p}}) = p$.



###### Cauchy

let G be a finite group, and a prime $p \in \N$ s.t $p \mid o(G)$. Then there exists $a\in G$ with $o(a) = p$.

<u>Proof</u>

By induction on $G$.

If $o(G) \le 2$ the the statement is clearly true.

Assume the statement is true for any group with order strictly less than $o(G)$.

If $G$ is ablien, then we know the statement to be true. Assume then $G$ is non-ablien.

Since $G$ is non-ablien, $C(G)$ is proper normal subgroup of $G$.

If $p \mid o(C(G))$, then we use the induction hypothesis on $C(G)$ and finish the proof.

Assume $p \nmid o(C(G))$, then $p \mid [G: C(G)]=o(G/C(G))$. Since the induction hypothesis holds for $G/C(G)$, let there be $h \in G$ s.t $o(hC(G)) = p$.

By the correspondence theorem, let there be some $H < G$ s.t $[G:H] = [G/C(G): hC(G)] = \frac{o(G/C(G))}{o(hC(G))} = \frac{o(G)}{o(C(G))*p}$, meaning that $o(H) = o(C(G))*p$.

If $H$ is a proper subgroup, then we invoke the induction hypothesis on $H$.

If $H=G$, then we have $o(G/C(G)) = p$. Therefore $G/C(G)$ is a cyclic group of order $p$. Take some $x \in G \setminus C(G)$ and we have that $o(x^{\frac{o(x)}{p}}) = p$.



###### P-group Criteria 

---

Let $p \in \N$ be a prime number. Then $G$ is a p-group $\Leftrightarrow$ For every $a \in G: o(a) = p^k$ for some $k \in \N$.

<u>Proof</u>

*This is an intimidate conclusion of Sylow Theorem*.



###### P-group has a normal $p^{n-1}$ normal subgroup

---

Let $G$ be a finite group of order $p^n$ for some prime $p \in \N$. Then $G$ has a normal subgroup of order $p^{n-1}$.

<u>Proof</u>

By induction on $n\in \N$.

If $n=1$ then the statement is clearly true. Let there be $n\in \N > 1$.

Assume the statement is true for any group of order $p^k$ for any $k \in \N < n$.

Since $G$ is a p-group, then $C(G)$ is non-trivial. Then we have $p \mid o(C(G))$.

By *Cauchy* we have some $g\in C(G)$ s.t $o(g) = p$. And since $g\in C(G)$ we also have $[g] \triangleleft G$.

Since $o(G/[g]) = p^{n-1}$, the induction hypothesis holds for $G/[g]$, and we can take some $\bar H \triangleleft G/[g]$ s.t $o(\bar H) = p^{n-2}$.

By the virtue of the correspondence theorem, we have $H \triangleleft G$ s.t $o(H) = p^{n-1}$.



###### Sylow

Let $G$ be a finite group of order $n$.

- A Sylow-p subgroup of $G$, is a group of order $p^k$, s.t $p^{k+1} \nmid o(G)$.
- For any prime $p \in \N$ s.t $p^i\mid o(G)$, $G$ contains a subgroup of order $p^i$.
- Any p-subgroup $H<G$ is contained in some Sylow-p subgroup.
- All Sylow-p subgroups are conjugate to each other.
- A Sylow-p subgroup is normal $\Leftrightarrow$ it is a unique Sylow-p subgroup.
- If $\eta_p$ is the number of Sylow-p subgroups, then:
  -  $\eta_p \equiv 1(modp)$
  - $\eta_p \mid m$, where $o(G)=m\cdot p^t$.
  - $\eta_p = [G:N(H)]$, for some Sylow-p subgroup $H<G$.

<u>Example</u>

The Klein 4-group - $V_4$, is a Sylow-2 subgroup of $A_4$.

Since $o(N(V_4)) \mid o(A_4)$, we have: $[A_4 : N(V_4)] \in \{1,2,4\}$.

Since $\eta_2 \equiv 1(mod2)$, we have $\eta_2=[A_4 : N(V_4)] \notin \{2,4\}$.

Hence $V_4$ is a normal subgroup of $A_4$.





###### pq group might be cyclic

---

Let G be a finite group, s.t $|G|=pq$ for some primes $p<q \in \N$.

If $p\nmid q-1$, then $G$ is cyclic.

<u>Proof</u>

*Side Note*: $G$ is cyclic $\Leftrightarrow$ $m \in \N \le pq$ $:|G_m| \le m$.

By Sylow theorems + $p \nmid q-1$, it follows that $G$ has a unique subgroups $P,Q <G$ of orders $p,q$.

Since $p,q$ are different primes + Lagrange, we have $P\cap Q = \{e\}$.

Hence $P,Q \triangleleft G, P\cap Q=\{e\}$, and therefore  $G\cong P\times Q$.

We have that $P \times Q$ is cyclic since it is the direct product of cyclic groups with co-prime orders.





###### Sylow proof

---

Let G be a finite group, and $p \in \N$ a prime s.t $p^k \mid o(G)$. Then there is some subgroup $H<G$ of order $p^k$.

<u>Proof</u>

By induction on $o(G)$.

If $o(G) \le 2$ the statement clearly holds.

Assume the statement is true for any finite group of order < $o(G)$.

If $G$ has some proper subgroup who's divisible by $p$, then we use the induction hypothesis on $H$, and finish the proof.

Else, we can assume that for any subgroup $H<G$, we have $p\mid [G:H]$.

Now, by the class equation, we have that $p\mid Z(G)$. And by *Cauchy* we have some $a\in Z(G)$ s.t $o(a)=p$.

Therefore,  $p^{k-1} \mid o(G/[a])$, and by the induction hypothesis + correspondence theorem, we have a subgroup $H<G$ of order $p^k$.



---

<u>Lemma #1</u>

Let $G$ be a, and let $K,H < G$. Then 

- $[K: K\cap N(H)]$ = the number of distinct conjugates of $L$ by elements of $K$.
- $[G : N(H)]$ = the number of distinct conjugates of $L$ by elements of $G$.



<u>Lemma #2</u>

Let G be a finite group, $p \in \N$ a prime, $H < G$ a Sylow-p subgroup, and $K < G$ a subgroup of order $p^k$.

Then,  there exists some $g \in G$ s.t $K \subseteq N(gHg^{-1})$.

<u>Proof</u>

For some representative set $I$, on the equivalence relation induced by conjugation by elements of $K$, we have:  

$[G: N(H)] = \sum\limits_{i\in I}[K:K \cap N(H_i)]$.

Note that $p \nmid [G: N(H)]$, otherwise $p \mid [G: H]$, contradicting the fact that $H$ is a maximal p-group in $G$.

$\Rightarrow$ Let there by $i \in I$ s.t that $p \nmid [K: K \cap N(H_i)]$.

Note that $[K: K\cap N(H_i)] = p^m$ for some $m\in \N$, since $o(K) = p^k$. It follows immediately that $m=0$.

$\Rightarrow [K: K\cap N(H_i)] = $1, and $K \subseteq N(H_i)$.



<u>Lemma #3</u>

Let G be a finite group, $p \in \N$ a prime, $H < G$ a Sylow-p subgroup, and $K < G$ a subgroup of order $p^k$.

Assume $K \subseteq N(gHg^{-1})$ for $g \in G$, then $K \subseteq gHg^{-1}$.

<u>Proof</u>

Denote $ H^* = gHg^{-1}$.

Suppose the statement is false, meaning $K\cap H^*$ is a proper subgroup of $K$.

Then clearly: $o(KH^*) = \frac{o(K)o(H^*)}{o(K\cap H^*)} = o(H^*)\frac{o(K)}{o(K\cap H^*)}>o(H^*)$.

However $K \subseteq N(H^*)$, hence $KH^* = H^*K$, and therefore $KH^* < G$.

Therefore $KH^*$ is a p-subgroup with order larger than $o(H)$, contradicting the fact that $H$ is a Sylow-p subgroup.

---



##### From Lemmas #2,#3 we deduce:

- All Sylow-p subgroups are conjugate.
- Every p-subgroup is a subgroup of a Sylow-p subgroup.





###### Class Equation Result

---

Let $G$ be a finite group, $H<G$,  and $A \subset G$. The we have :
$$
[G: N_G(A)] = \sum\limits_{B\in M}[H:N_H(B)]
$$
Where $M$ is a representative set of the equivalence class, conjugate under $H$.

