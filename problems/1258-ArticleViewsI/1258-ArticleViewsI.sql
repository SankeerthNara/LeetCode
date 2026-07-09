-- Last updated: 7/9/2026, 10:21:46 PM
# Write your MySQL query statement below
SELECT author_id AS id FROM Views
WHERE author_id = viewer_id
GROUP BY author_id
ORDER BY author_id ASC;