---
date: 2024-10-22
tags:
  - theory
  - multidimensional_data_analysis
---
# Row number
Считает уникальные строки над записью.
```sql
ROW_NUMBER ( )   
    OVER ( [ PARTITION BY value_expression , ... [ n ] ] order_by_clause )
```
Partition by позволяет выделить группы, внутри которых ведется подсчет строк.

## over
По отдельности тоже крайне полезная функция, позволяющая ограничить количество строк, по которым работает функция.
```sql
select count (*) over (partition by card_id), min (startdate) over (partition by card_id)
from medical_events
```
Выведет количество болезеней у каждого пациента и первую дату его посещения.

Агрегированные поля, полученные с помощью `over` **нельзя** использовать в конструкции `where`, т.к. `over` применяется на поля, выбранные с помощью `where`.

```sql
select e.*, max(startdate) over (partition by card_id order by startdate rows between unbounded preceding and 1 preceding) as prev
from medical_events e
```

В этом запросе все записи делятся на группы по `card_id`, сортируются по `startdate` и выбирается максимальное значение `startdate` из окна записей от предыдущего (`1 preceding`) до самого первого `unbounded preceding`.

В `over` можно использовать окна (`rows between`), ограничения которых задаются относительно записи, для которой вычисляется `over`: (`1`/`2`/.../`unbounded` `preceding`/`following`)/`current row`, через `and`.

## lag, lead, first_value, last_value
`lag` берет значение поля предыдущей записи.
`lead` берет значение поля следующей записи.

Можно указывать, на сколько записей назад/вперед (по умолчанию 1).

`first_value` берет значение поля первой записи.
`last_value` берет значение поля последней записи.

> [!warning] Важно
> Окно этих функций по умолчанию - `rows between preceding unbounded and current row`.