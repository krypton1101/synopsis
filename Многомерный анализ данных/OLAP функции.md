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

Агрегированные поля, полученные с помощью `over` **нельзя** использовать в конструкции `where`.

