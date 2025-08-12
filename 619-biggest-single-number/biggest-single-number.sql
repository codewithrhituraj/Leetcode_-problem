-- # Write your MySQL query statement below
-- select  max(num) as num from MyNumbers 
-- group by num
-- having count(*)=1
-- order by num desc
-- limit 1 
SELECT MAX(num) AS num
FROM MyNumbers
WHERE num IN (
    SELECT num
    FROM MyNumbers
    GROUP BY num
    HAVING COUNT(*) = 1
);

