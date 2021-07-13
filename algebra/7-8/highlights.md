

-----

$H,K < G$ subgroups s.t $[G:K],[G:H] \in \mathbb{N}$. 

Then $[G:H\cap K]$ is finite as well.

<u>Proof</u>
$$
xH=xK \space \and \space yH=yK
\\ \Rightarrow  y^{-1}x \in H \cap K
\\ \Rightarrow xH\cap K = yH\cap K
$$
By $(1)$ we have $xH\cap K \ne yH\cap K \Rightarrow xH \ne xK \vee yH \ne yK$.

Meaning, we can have at most $[G:H]*[G:K]$ different co-sets of $H \cap K$.

Therefore, $[G:H\cap K] <[G:H]*[G:K]$.



------



For a finite group $G$.

- $G$ is cyclic $\Leftrightarrow $ $G$ has no two cyclic subgroups of same order.

- $|G_m| \le m$, for any $m \in \mathbb{N} \Leftrightarrow$ G has no two cyclic subgroups of the same order.

  

<u>Proof</u>

$\Rightarrow$ Assume $G$ is cyclic, it's known that $G$ has exactly one subgroup of order m, for any $m \mid o(G)$.

$\Leftarrow$ Assume G has no two cyclic subgroups of the same order.

​	Denote $N=o(G)$, $\mu_m =$ cyclic subgroups of order $m$, and we have:
$$
0 = N - N= \sum\limits_{0<m \mid N} \varphi(m) - \sum\limits_{0<m \mid N}\mu_m*\varphi(k)=\sum\limits_{0<m \mid N}(1-\mu_m)*\varphi(k)
$$

- Euler Function - $\varphi$ is positive for all values.

- $\mu_m \le 1$, otherwise the state $|G_m|\le m$ is false.

Then by (2), we must have $\mu_N=1$, hence $G$ is cyclic.



------



Let G a group satisfying $Aut(G) = \{Id\}$. Show that G is abelian, and $g^2 = e$ for all $g \in G$.

<u>Proof</u>

If $Aut(G) = \{e\}$, then for any $g,h \in G$ we have $ghg^{-1}=h$, since $g \mapsto ghg^{-1}$ is automorphism.

Hence $G$ is ablien.

Since $G$ is ablien, $g \mapsto g^{-1}$ is automorphism, hence $g = g^{-1}$.



----



$K < H < G$ s.t $[G:H],[G:K] \in \mathbb{N}$.

Then $[G:K]=[G:H][H:K]$.

<u>Proof</u>

For each $gK \in G/K$ we have exactly one co-set of $G/H$ containing $gK$.

$\Rightarrow \{gK | g\in G\} \subseteq \biguplus\{\{gH/K\}|g\in G\}$.

Hand of course we have $\biguplus\{\{gH/K\}|g\in G\} \subseteq \{gK | g\in G\}$.

$\Rightarrow \{gK | g\in G\} = \biguplus\{\{gH/K\}|g\in G\}$.

So we have $[G:K] = [G:H][H:K]$.

------



Any finite subgroup of $(F\setminus\{0\}, *)$ is cyclic.

<u>Proof</u>

Let G be a finite subgroup of $(F\setminus\{0\}, *)$, and take $m\in \mathbb{N}$.

Take $P(x) = x^m - 1$. $P$ as $m$ roots at most over $F$.

$\Rightarrow |G_m| \le m$.

It follows that $G$ is cyclic.



-------



