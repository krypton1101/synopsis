# Функции в $\mathbb{R}^n$
$$\begin{align*}
\sqsupset y=f(x)=f(x_1,x_2,\dots,x_{n})\quad E\subset \mathbb{R}^{n}\\
f(x):\:E\to \mathbb{R}
\end{align*}$$
Определение.
$$\begin{align*}
\text{Множество точек на }\mathbb{R}^{n}:\:f(x_{1},x_{2},...,x_{n})=c\\
c=z \text{ - фиксированное значение функции}
\end{align*}$$
\- множество уровня функции $f(x)$ ($\mathbb{R}^{2}$ - линия уровня).

Определение.
$$\begin{align*}
\sqsupset x \text{ - точка сгущения из множества }E\\
y_{0}\in \mathbb{R}\text{ - предел функции }f(x)\quad x\to x_{0}\\
\text{Если }\forall \epsilon>0\quad \exists \theta(\epsilon):\:\forall x\neq x_{0},x\in E: |x-x_{0}|<\theta(\epsilon)\\
\text{Выполняется }|f(x)-y_{0}|<\epsilon\\
\text{Обозначение }\lim\limits_{x\to x_{0}}f(x)=y_{0}\\
\begin{pmatrix}x_{1}\to x_{1\:0}\\
x_{2}\to x_{2\:0}\end{pmatrix}=(x_{1},x_{2})\to(x_{1\:0},x_{2\:0})
\end{align*}$$
Замечание.
В n-мерном пространстве помимо обычного понятия предела можно рассматривать пределы по отдельным координатам. Если у функции поочередно брать пределы по разным координатам, такие пределы называются **повторными**.

Пример.
$$\begin{align*}
f(x,y)=\frac{x-y+x^{2}+y^{2}}{x+y}\\
\lim\limits_{x\to0}\frac{x-y+x^{2}+y^{2}}{x+y}=\frac{-y+y^{2}}{y}=-1+y\\
\lim\limits_{y\to0}\left(\lim\limits_{x\to0}\frac{x-y+x^{2}+y^{2}}{x+y}\right)=\lim\limits_{y\to0}(-1+y)=-1\\
\lim\limits_{x\to0}\left(\lim\limits_{y\to0}\frac{x-y+x^{2}+y^{2}}{x+y}\right)=\lim\limits_{x\to0}\left(\frac{x+x^{2}}{x}\right)=1
\end{align*}$$
Теорема.
Если функция имеет обычный предел в какой-то точке, то она имеет и повторные пределы в этой точке, при чем равные между собой.

---
#theory #mathematical_analysis 