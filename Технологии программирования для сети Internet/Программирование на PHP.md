---
date: 2023-10-05
tags:
  - theory
  - internet_programming_techniques
---
Формы - особая часть сайта, используемая для передачи информации от клиента на сервер и наоборот.

Валидация формы - проверка ее полей.

Авторизация $\neq$ аутентификация.
Авторизация - проверка прав доступа, аутентификация - проверка личности (проверка логин/пароль).

При успешной отправке формы следует переводить пользователя на другую страницу.

Cookies - информация в форме "ключ-значение", хранящаяся на клиентской стороне.
```php
setcookie("cookie_name", value, time)
```

Сессия - хранилище на стороне сервера.
```php
session_start();
$_SESSION["abc"] = 1;
```

