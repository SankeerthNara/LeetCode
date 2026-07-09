-- Last updated: 7/9/2026, 10:21:50 PM
# Write your MySQL query statement below
SELECT p.product_name, s.year,s.price
FROM Sales s
JOIN Product p
ON p.product_id = s.product_id;