###### 12.2.2017 | M14

---

1. Let $G$ by a finite group, and $P$ a Sylow-p subgroup. Then $N(P)= N(N(P))$.

   <u>Solution</u>

   - $N(P)$ is a subgroup, hence $N(P) \subseteq N(N(P))$.

   - On the other hand, if $g \in N(N(P))$,  we have $gPg^{-1} \subseteq gN(P)g^{-1} = N(P)$. Therefore $P,gPg^{-1}$ are Sylow-p subgroups 

     of $N(P)$.

     And since $P \triangleleft N(P)$, we must have $P=gPg^{-1}$.

     $\Rightarrow g \in N(P)$.

   

   If $G$ is a finite group, and $P$ is some proper subgroup, then we may have $N(P) \neq N(N(P))$.

   <u>Example</u>

   - $[\tau] < D_8$.

   - $N([\tau]) = [\sigma^2, \tau] = \{\sigma^{0}, \sigma^{2}, \sigma^{4}, \sigma^{6}, \tau, \sigma^{2}\tau, \sigma^{4}\tau, \sigma^{6}\tau \}$.

   - $N(N[\tau]) = D_8$.

     

2. Let $G$ be a group, and $A,B \triangleleft G$ s.t $G=AB$. Then $G / (A\cap B) \cong G/A \times G/B$.

   <u>Solution</u>

   We define $\varphi: G \mapsto G/A \times G/B$ with $(g)\varphi=(bA, aB)$ where $g=ab$ for $a,b\in A,B$.

   - We must show the mapping is well defined.

     Since $G=AB$, for any $g \in G$ some $a,b$ exists.

     If $g=a_1b_1=a_2b_2$, then since $A,B\triangleleft G$: $(b_2A,a_2B)=(a_2^{-1}a_1b_1A, a_1b_1b_2^{-1}B)=(a_2^{-1}a_1Ab_1,a_1B)=(Ab_1,a_1B)=(b_1A,a_2B)$.

   - This mapping is clearly onto, since if $(hA, kB) \in G/A \times G/B$, then $(hk)\varphi = (hA, kB)$.

   - This mapping is a homomorphism, since for any $g_1,g_2 \in G$, we have (based on $B \triangleleft G$)
     $$
     (g_1g_2)\varphi=(a_1b_1a_2b_2)\varphi=((a_1b_1a_2b_1^{-1})(b_1b_2))\varphi = (b_1b_2A,a_1b_1a_2b_1^{-1}B)=(b_1b_2A, a_1b_1a_2B)=(b_1b_2A, a_1a_2B)
     $$
     Hence:
     $$
     (g_1g_2)\varphi = \cdot \cdot \cdot=(b_1b_2A, a_1a_2B)= (b_1A,a_1B)\cdot(b_2A,a_2B)=(a_1b_1)\varphi(a_2b_2)\varphi = (g_1\varphi)(g_2)\varphi
     $$

   - 

   We conclude that $G/A \times G/B = Im(\varphi) \cong G/ker(\varphi) = G/(A\cap B)$.

   

3. $G$ is a group s.t $|G|=pqr$ for distinct primes $p,q,r \in \N$.

   $P,Q,R$ are the matching Sylow subgroups.

   If $P \subseteq C(G)$ and $R \subseteq N(Q)$ then $G \cong P \times QR$.

   <u>Solution</u>

   - $o(RQ)=\frac{o(R)o(Q)}{o(R\cap Q)}=rq$, since $R,Q$ are cyclic groups of distinct prime orders.

   - $P\cap QR=\{e\}$, otherwise we have $e\neq g \in P \cap QR$.

     $o(g) = p$, since $P$ is a cyclic group of prime order.

     $\Rightarrow$ $p \mid rq=O(RQ)$, and therefore $p\mid r \or p \mid q$, which is a contradiction.

   - Since $R \subseteq N(Q)$, then $RQ=QR$, hence $RQ < G$.

     Then, $o(PRQ) = \frac{|P||RQ|}{|P \cap RQ|}=\frac{|P||R||Q|}{|P \cap RQ||R\cap Q|}$, and by the previous section we have $o(PRQ)=o(G)$, hence $PRQ=G$.

   - $P \triangleleft G$ since $P \subseteq C(G)$.

   - $QR \subseteq N(QR)$, since $QR$ is a subgroup.

     $P \subseteq N(QR)$, since $P \subseteq C(G)$.

     Therefore, for any $g\in G$, we have $g=pqr$ for some $p,q,r \in G$, and then:

     $gQRg^{-1}=(pqr)(QR)(pqr)^{-1}=(p)(qr)(QR)(qr)^{-1}(p)^{-1}=p(QR)p^{-1}=QR$.

   

   We established a criteria for direct product, therefore $G \cong P \times QR$.

   

4. $G$ is a finite group, and $p \in \N$ prime s.t $(ab)^p=a^pb^p$ for any $a,b \in G$.

   Assume $P$ is a Sylow-p sub group.

   $(a)$ Show that $P \triangleleft G$.

   



































