Consider a continuous non-negative $f:[0,\infin) \mapsto \R$.

If $\int\limits_{0}^{\infin}f(x)dx < \infin$, then $\lim\limits_{t\mapsto \infin} \frac{1}{t}\int\limits_{0}^{t}xf(x)dx < \infin$.

---

Why is it true though?

Take some very large $t\in \R$, and examine the values $(\frac{xf(x)}{t})([0,t])$.

As the interval begins:

- x is low
- f(x) is somewhat bounded
- t is very large

As the interval progress:

- $x$ is relatively close to $t$
- $f(x)$ mean value is very low

---

It makes sense then to split the interval at some point.

$\forall t\in \R>0: \frac{1}{t}\int\limits_{0}^{t}xf(x)dx = \\ \frac{1}{t}\int\limits_{0}^{\sqrt{t}}xf(x)dx + \frac{1}{t}\int\limits_{\sqrt{t}}^{t}xf(x)dx \le \\ \frac{1}{t}\int\limits_{0}^{\sqrt{t}}\sqrt{t}f(x)dx + \frac{1}{t}\int\limits_{\sqrt{t}}^{t}tf(x)dx \le \\ \frac{1}{\sqrt{t}}\int\limits_{0}^{\sqrt{t}}f(x)dx + \int\limits_{\sqrt{t}}^{t}f(x)dx \xrightarrow[t \space \mapsto \space \infin]{}{0}$



