$N$ couples are about to sit down around a round table.

- What is the probability that no wife will sit next to her husband?
- What is the probability that exactly $k$ couples will sit next to each other?



<u>Answer</u>

- Let as denote A - the event where no couple sits together.
- If $E_i$ is the event where the i-th couple sits next to each other, than we wish to calculate - $1 - \mathbb{P}(\bigcup\limits_{i=1}^{N}E_i)$.

- Meaning, we find the probability that at least one couple sits together, and take the counterpart.

- Using the exclusion inclusion principle:
  $$
  \mathbb{P}(\bigcup\limits_{i=1}^{N}E_i)= \sum\limits_{i=1}^{N}{(-1)^{i+1}\binom{N}{i}\sum\limits_{a_1<..<a_i}{\mathbb{P}(\bigcap\limits_{j\in\{a_1,..,a_i\}}{E_j})}}
  $$
  

​	Where $\bigcap\limits_{j\in\{a_1,..,a_i\}}{E_j}$ is the event that the couples $a_1,..,a_i$ are sitting together.

- $\mathbb{P}(\bigcap\limits_{j\in\{a_1,..,a_i\}}{E_j})=\frac{\frac{(N-i)!}{N}\cdot2^{i}}{\frac{N!}{N}}$, which is the number of ways we can sit together the i couples, divided by the number of ways we can sit the couples around the round table.

- Then we finally have:
  $$
  \mathbb{P}(A) =1 - \mathbb{P}(\bigcup\limits_{i=1}^{N}E_i)= \sum\limits_{i=0}^{N}{(-1)^{i}\sum\limits_{a_1<..<a_i}{\binom{N}{i}\cdot \frac{(N-i-1)!\cdot2^{i}}{(N-1)!} }}
  $$
  