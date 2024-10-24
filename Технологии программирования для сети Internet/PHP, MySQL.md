---
date: 2023-09-21
tags:
  - theory
  - internet_programming_techniques
---
PHP - сиподобный, создан в 1994 году.
Нужен для вкрапления динамической информации на статичную html-страницу.
Расшифровка - "PHP: Hypertext Preprocessor".
Большой вклад в развитие внесла компания Zend.
Имеет динамическую типизацию, сборщик мусора. Характеризуется низким порогом входа.

Есть два способа запуска:
- Из консоли
  `php -f /home/user/test.php`
  Лимитов нет.
- Из браузера
  Веб-сервер ставит лимит в 30 секунд.

PHP вкрапляется в html-код
```html
<body>
	<? echo "Hello World!";?>
	<!-- Сокращенная форма -->
	<?= 'Hello World!';?>
</body>
```

Правильно разделять логику (PHP) и представление (html+css+графика)
```html
<?
$a = 1+5;
$text = "Привет мир, 1+5 =".$a;
?>
<html>
	<head></head>
	<body>
		<?=$text ?>
	</body>
</html>
```

А лучше - разделить на два файла `logic.php` и `view.php`.
logic.php
```php
<?
$a = 1+5;
$text = "Привет мир, 1+5 =".$a;
include("view.php");
?>
```
view.php
```php
<html>
	<head></head>
	<body>
		<?=$text ?>
	</body>
</html>
```

Кавычки для строк используются и двойные и одинарные.
Внутри двойных кавычек могут вызываться переменные.

Типы данных стандартные
Есть "псевдотипы". На курсе о них не говорится.

Массивы
Индексированные (ключи - индекс от 0 до N-1) и ассоциативные (все остальные)
```php
<?
$a = array(); $b = array(1,5,3);
$c = []; $d = ['a'=>1, 'b'=>5, 'c'=>3];
?>
```

Глобальные переменные
`global $x;`

Подключение зависимостей
`require` - до старта программы
`include` - во время работы
`require_once`, `include_once`

ООП есть, без множественного наследования

Типовая отладка
XDebug для дебага, пошагового выполнения. Запрещено на production-сервере.

Источники
- Лекции ИНТУИТ по PHP
- Лекции mail.ru по веб-разработке

Книги
- "Чистый код" - Роберт Мартин
  Для новичков
- "Совершенный код" - С. Макконел
  Для профессионалов

Требования
- Защита
- Оформление кода
- Эффективность
- Портируемость
- Аккуратный фронтенд

