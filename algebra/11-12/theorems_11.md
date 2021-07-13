###### External Direct Product

---

Let $G1,...,Gm$ be groups, and denote $G=G1\times\cdot\cdot\cdot\times Gm$.

Then $(G, \cdot)$ is a group, where $\forall g,h \in G: g\cdot h=(g_1h_1,...,g_mh_m)$.

$G$ is called the direct product of $G_1,...,G_m$.



###### 11.4 + 11.5

---

- $G=G_1\times ... \times G_m$.

- $\{\bar{G_i}\}_{i=1}^{m}$.

- $\bar{G_i} =\{(e_1,...,e_{i-1},g_i,e_{i+1}...,e_m) \space | \space g_i \in G_i\}$.

Then for any $i \in \{1,...,m\}:$

- $\bar{G_i} \cong G_i$.
- $\bar{G_i} \triangleleft G$.

- $\bar{G_i} \cap (\bar G_1\cdot \cdot \cdot \bar G_{i-1} \cdot \bar G_{i+1}\cdot \cdot \cdot \bar G_m) = \{\bar{e}\}$.

And we have $G=\bar{G_1}\cdot \cdot \cdot \bar{G_m}$.





###### Internal Direct Product

---

Let $G$ a group, and let $N_1,...,N_m$ be subgroup s.t:

- $\forall i \in \{1,...,m\}: N_i \triangleleft G$.
- $N_i \cap (N_1 \cdot \cdot  \cdot N_{i-1}N_{i+1}\cdot \cdot \cdot N_m) = \{e\}$.
- $G=N_1\cdot \cdot \cdot N_m$.

Then we say that $G$ is the Internal Direct Product of $N1,...,N_m$ and write $G=N_1\otimes \cdot \cdot \cdot \otimes N_m$.



###### 11.7

----

If $G=N_1\otimes \cdot \cdot \cdot \otimes N_m$ ($G$ is an internal direct product...), then:

$\forall i<j: a_ia_j=a_ja_i$, where $a_i,a_j\in N_i,N_j$.

<u>Proof</u>

Assume $i < j$ and let us have $a_i,a_j \in N_i, N_j$, then: $a_ia_j(a_i)^{-1}(a_j)^{-1} \in N_i \cap N_j \subseteq N_i \cap (N_1 \cdot \cdot  \cdot N_{i-1}N_{i+1}\cdot \cdot \cdot N_m) = \{e\}$.

Hence $a_ia_j(a_i)^{-1}(a_j)^{-1} = e$, and $a_ia_j=a_ja_i$.



###### 11.8

----

If $G=N_1\otimes \cdot \cdot \cdot \otimes N_m$ then, $G\cong N_1\times \cdot \cdot \cdot \times N_m$.

<u>Proof</u>

- Let $g\in G$, and we will show there are unique $n_1,...,n_m \in N_1,...,N_m$ s.t $g=n_1\cdot \cdot \cdot n_m$ .

  First, since $G=N_1\cdot \cdot \cdot N_m$, then $n_1, ... ,n_m$ exists.

  If $g=n_1\cdot \cdot \cdot n_m= k_1\cdot \cdot \cdot k_m$, then we have by $11.7$:

  $n_2k_{2}^{-1}\cdot \cdot \cdot n_m k_{m}^{-1} = n_{1}^{-1}k_1 \in N_1 \cap N_2\cdot \cdot \cdot N_m = \{e\}$, hence $n_1=K_1$.

  We show in a similar manner that $n_i=k_i$ for any $i$.

- Denote $\varphi:G \mapsto N_1\times \cdot \cdot \cdot \times N_m$, a map defined by $g\mapsto (n_1,...,n_m)$, for the unique $g=n_1\cdot\cdot\cdot n_m$.

  By the previous section, it is clear that $\varphi$ is well-defined,1-1, and onto.

- If $g,h\in G$ and $g=n_1\cdot\cdot\cdot n_m$, $h=k_1\cdot\cdot\cdot k_m$, then by $11.7$ we have: $(gh)\varphi = (n_1k_1\cdot \cdot \cdot n_mk_m)\varphi =(n1k_1,...,n_mk_m)=(n_1,...,n_m)(k_1,...,k_m)=(g)\varphi (h)\varphi$.

Hence $\varphi$ is an isomorphism, and $G\cong N_1\times \cdot \cdot \cdot \times N_m$.



###### 11.9 Direct Product Criteria (1)

---

Let $G$ be a group, and $N_1,...,N_m < G$.

Then $G$ is a direct product of $N_1,...,N_m$ $\Leftrightarrow$ 

1. $\forall 1\le i \le m: N_i \triangleleft G$.

2. $G = N_1\cdot \cdot \cdot N_m$
3. $N_i \cap (N_1 \cdot \cdot  \cdot N_{i-1}N_{i+1}\cdot \cdot \cdot N_m) = \{e\}$.

<u>Proof</u>

$\Rightarrow$ If $G$ is an internal direct product of $N_1,...,N_m$, then $1,2,3$ are true by definition.

If $G$ is an external direct product of $N_1,...,N_m$, then we $1,2,3$ by $11.4 + 11.5$.

$\Leftarrow$ If $1,2,3$ then $G$ is an internal product of $N_1,...,N_m$, and by $11.8$ $G$ is also isomorphic to $N_1\times \cdot \cdot \cdot \times N_m$, the external direct product.



###### 11.10 Direct Product Criteria (2)

---

Let $G$ be a group, and $N_1,...,N_m < G$.

Then $G$ is a direct product of $N_1,...,N_m$ $\Leftrightarrow$ 

1. $\forall i<j: a_ia_j=a_ja_i$, where $a_i,a_j\in N_i,N_j$.
2. For any $g \in G$, $g=n_1 \cdot \cdot \cdot n_m$ for some $n_1,..., n_m \in N_1,...,N_m$.
3. For any $g \in G$, the representation in $2$ is unique.

<u>Proof</u>

$\Rightarrow$ If $G$ is a direct product, then we have shown $1,2,3$ to hold in $11.7 + 11.8$.

$\Leftarrow$ Assuming $1,2,3$ hold, we want to prove that $G$ satisfy *criteria 1* for direct product.

- By $2$ we have that $G=N_1\cdot \cdot \cdot N_m$.

- If $a \in N_i$, and $g\in G$ where $g=n_1\cdot \cdot \cdot n_m$ (as given in $2$).

  We have by $1$, $g^{-1}ag = n_1\cdot \cdot \cdot n_m a n_m^{-1}\cdot \cdot \cdot n_1^{-1} = (n_1\cdot \cdot \cdot n_{i-1})(n_ian_{i}^{-1})(n_{i-1}^{-1}\cdot \cdot \cdot n_1^{-1})$. 

  Note that $n_ian_i^{-1} \in N_i$, and we and by $1$ we can continue still, and have:

  $gag^{-1}=...=n_ian_i^{-1} \in N_i$. Hence $N_i \triangleleft G$.

- If $g \in N_i \cap (N_1 \cdot \cdot  \cdot N_{i-1}N_{i+1}\cdot \cdot \cdot N_m)$, then $g=e \cdot \cdot \cdot e \space n_i e \space \cdot \cdot \cdot e$, for some $g=n_i \in N_i$.

  On the other hand, $g=n_1\cdot \cdot \cdot n_{i-1}\space e\space n_{i+1} \cdot \cdot \cdot n_m$ as well.

  Since the representation of $g$ is unique by $3$, then we must have  $n_i=e$.

  Hence $N_i \cap (N_1 \cdot \cdot  \cdot N_{i-1}N_{i+1}\cdot \cdot \cdot N_m) = \{e\}$.
  
  

---

###### Direct Product Criteria (3)

Let $G$ be a group, and $N_1,...,N_m < G$.

Then $G$ is a direct product of $N_1,...,N_m$ $\Leftrightarrow$ 

1. $\forall 1\le i \le m: N_i \triangleleft G$.

2. $G = N_1\cdot \cdot \cdot N_m$
3. $\forall i:N_i \cap (N_1 \cdot \cdot  \cdot N_{i-1}) = \{e\}$.

<u>Proof</u>

$\Rightarrow$ If $G$ is a direct product, then we have *Criteria (1)*, so $1,2,3$ obviously hold.

$\Leftarrow$ We assume $1,2,3$ are true, and show that *Criteria (2)* holds.

- Since $G = N_1\cdot \cdot \cdot N_m$, every $g\in G$ has a layout form of $n_1 \cdot \cdot \cdot n_m$.

- By $2$, we have for any $i < j$, $N_j \cap N_i = \{e\}$.

  Therefore, $a_ja_i=a_ia_j$ for any $a_j,a_i \in N_j,N_i$.

- If $g=n_1\cdot \cdot \cdot n_m = k_1\cdot \cdot \cdot k_m$:

  - Then $(k_1^{-1}n_1)\cdot \cdot \cdot(k_{m-1}^{-1}n_{m-1})=k_mn_m^{-1} \in N_1 \cdot \cdot \cdot N_{m-1} \cap N_m = \{e\}$, therefore $k_m=n_m$.
  - Since $k_m=n_m$, then we have $n_1\cdot \cdot \cdot n_{m-1} = k_1\cdot \cdot \cdot k_{m-1}$, and we similarly reach $k_{m-1}=n_{m-1}$.
  - This way, we drive for any $i$, $k_i=n_i$.

  So we have a unique representation of $g$ in $N_1\cdot \cdot \cdot N_m$.



###### Direct Product Criteria (4)

---

If a finite group $G$ has $N_1,...,N_m \triangleleft G$ for which:

1. $G=N_1\cdot \cdot \cdot N_m$.
2. $o(G) = o(N_1) \cdot \cdot \cdot o(N_m)$.

Then $G \cong N_1 \times \cdot \cdot \cdot \times N_m$.

<u>Proof</u>

We show *Criteria (3)* holds.

- We are given $G=N_1\cdot \cdot \cdot N_m$.
- We are given $N_1,...,N_m \triangleleft G$.
- It is left for us to prove that for any $i$, $N_i \cap (N_1 \cdot \cdot  \cdot N_{i-1}) = \{e\}$.

By induction we can show that for any $k$ we have $o(N_1\cdot \cdot \cdot N_k) = o(N_1) \cdot \cdot \cdot o(N_k)$.

Now, for any $i$, we can mark $H_i = N_i \cap (N_1 \cdot \cdot \cdot N_{i-1})$, and then:

$o(N_1)\cdot \cdot \cdot o(N_i) = o(N_1 \cdot \cdot \cdot N_i) = o((N_1 \cdot \cdot \cdot N_{i-1})\cdot N_i) = \frac{o(N_1 \cdot \cdot \cdot N_{i-1})o(N_i)}{o(H_i)} = \frac{o(N_1)\cdot \cdot \cdot o(N_i)}{o(H_i)}$.

Hence $o(N_1)\cdot \cdot \cdot o(N_i) = \frac{o(N_1)\cdot \cdot \cdot o(N_i)}{o(H_i)}$, and we must have $o(H_i) = 1$.





###### Conclusions

---

1. If $G$ is a finite group of order $n$, where $n$ is decomposed to $p_1^{l_1} \cdot \cdot \cdot p_m^{l_m}$, and $G$ has a unique Sylow-$p_i$ subgroup for any $i$, then $G\cong P_1 \times \cdot \cdot \cdot \times P_m$.

   Meaning, $G$ is a direct product of it's unique Sylow subgroups.

2. If $G$ is a finite ablien group of order $n$, where n is decomposed to $p_1^{l_1} \cdot \cdot \cdot p_m^{l_m}$, then $G\cong H_1 \times \cdot \cdot \cdot \times H_m$ for any subgroups to satisfy, $o(H_i)=p_i^{l_i}$ for any $i$.