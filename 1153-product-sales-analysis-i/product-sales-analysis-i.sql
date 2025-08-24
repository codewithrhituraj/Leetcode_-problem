# Write your MySQL query statement below
-- select Product.product_name, Sales.year, Sales.price
-- from Sales 
-- inner join Product 
-- on Sales.product_id = Product.product_id;
select  p.product_name , s.year , s.price
from sales s
inner join Product p
on s.product_id = p.product_id ;