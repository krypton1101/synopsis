---
date: 2024-10-28
tags:
  - theory
  - data_mining
---
### k ближайших соседей
$x\in \mathbb{R}^{n}$
$y$ - множество допустимых ответов
$\{(x_{i};y_{i})\}_{i=1}^{k}$ - обучающее множество
$x^{m}=\{x_{i}\}^{m}_{1}$
$\{y_{i}\}_{i=1}^{m}$

$P(x_{i};x')$
$P(x;x')=\sum\limits_{i=1}^{n}(x_{i}-x_{i}')^{2}$
берется максимальное значение модуля и сумма модулей
$P(x;x')=\max|x_{i}-x_{i}'|$
$P(x;x_{i})=\sum\limits_{i=1}^{n}|\overline{x_{i}}-x_{i}'|$

Для $\forall x\in X$ обучающей выборки $x_{i}\uparrow$ до $x$
$P(x;x_{1;x})\leq P(x;x_{2;x})\leq\dots\leq P(x;x_{m;x})$
$x_{i;x}$ - $i$-тый сосед объекта $x$
$y_{i;x}$ - $i$-тый сосед объекта $y$
$a(x)=\arg\max\limits_{y\in Y}\sum\limits_{i=1}^{m}[x_{i;x}=y]\omega(i;x)$
$\omega$ оценивает степень важности $i$-того соседа для классификации объекта
$\omega(i;x)=[i\leq k]$

Оптимальное значение параметра $k$ определяется по критерию скользящего контроля с исключением объектов по одному.
$(k*)=\arg\max\limits_{K}LO(k;X^{L})$, где
$LO(k;X^{L})=\sum\limits_{i=1}^{L}\sum y_{i}=a(x_{i};x^{L}\subset x_{i};k)$
Выборка из трех классов $\in$ гауссовское распределение с диагональными матрицами ковариации

```matlab
function kMeans()
	n=100;
	alpha=1.5;
	sig2=1;
	dist2=4;
	
	beta=1.3;
	sig3=1.5;
	dist3=3;
	
	[X,y)=loadModelData3(N,alpha,sig2,dist2,beta,sig3,dist3);
	idx1=find(y==0);
	idx2=find(y==1);
	idx3=find(y==2);
	
	minErrors=0;
	funcNorm='normEuc';
	CalcAndPlot('normEuc', X, y, idx1, idx2, idx3);
	funcNorm='normMax';
	CalcAndPlot('normMax', X, y, idx1, idx2, idx3);
	funcNorm='normAbs';
	CalcAndPlot('normAbs', X, y, idx1, idx2, idx3);
end

function CalcAndPlot(funcNorm, X, y, idx1, idx2, idx3)
	RR=GetBigIndices4(X, funcNorm);
	[Kopt, minErrors]=GetK3(RR, y);
	PlotClasificotion4(X, y, Kopt, idx1, idx2, idx3, funcNorm, minErrors)
end
```


> [!WARNING] 
> Воронцова - лекция по метрическим алгоритмам классификации
> Школа информации и компьютерных наук имени Брейна (Калифорния)
> digiratory.ru/1492
