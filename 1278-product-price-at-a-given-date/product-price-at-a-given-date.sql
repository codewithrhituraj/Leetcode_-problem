-- Latest price change before or on '2019-08-16'
SELECT p.product_id, p.new_price AS price
FROM Products p
JOIN (
    SELECT product_id, MAX(change_date) AS latest_date
    FROM Products
    WHERE change_date <= '2019-08-16'
    GROUP BY product_id
) latest
ON p.product_id = latest.product_id
AND p.change_date = latest.latest_date

UNION

-- Products with no change before that date, default price = 10
SELECT DISTINCT product_id, 10 AS price
FROM Products
WHERE product_id NOT IN (
    SELECT product_id
    FROM Products
    WHERE change_date <= '2019-08-16'
);
