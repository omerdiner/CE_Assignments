INSERT INTO  league (l_id, l_name, l_teamcount, l_country) VALUES (1, 'Premier League', '18', 'England');
INSERT INTO  league (l_id, l_name, l_teamcount, l_country) VALUES (2, 'Serie A', '18', 'Italy');
INSERT INTO  league (l_id, l_name, l_teamcount, l_country) VALUES (3, 'Super League', '19', 'Turkey');

INSERT INTO  club (c_id, l_id, c_name, c_foundationyear) VALUES (1, 1, 'Arsenal', '1892');
INSERT INTO  club (c_id, l_id, c_name, c_foundationyear) VALUES (2, 1, 'Liverpool', '1867');
INSERT INTO  club (c_id, l_id, c_name, c_foundationyear) VALUES (3, 1, 'Manchester United', '1900');
INSERT INTO  club (c_id, l_id, c_name, c_foundationyear) VALUES (4, 1, 'Everton', '1888');
INSERT INTO  club (c_id, l_id, c_name, c_foundationyear) VALUES (5, 1, 'Tottenham', '1897');
INSERT INTO  club (c_id, l_id, c_name, c_foundationyear) VALUES (6, 3, 'Beşiktaş', '1903');
INSERT INTO  club (c_id, l_id, c_name, c_foundationyear) VALUES (7, 3, 'Galatasaray', '1905');
INSERT INTO  club (c_id, l_id, c_name, c_foundationyear) VALUES (8, 3, 'Fenerbahçe', '1907');
INSERT INTO  club (c_id, l_id, c_name, c_foundationyear) VALUES (9, 3, 'Trabzonspor', '1961');
INSERT INTO  club (c_id, l_id, c_name, c_foundationyear) VALUES (10, 2, 'Juventus', '1900');
INSERT INTO  club (c_id, l_id, c_name, c_foundationyear) VALUES (11, 2, 'Roma', '1950');
INSERT INTO  club (c_id, l_id, c_name, c_foundationyear) VALUES (12, 2, 'Atalanta', '1925');
INSERT INTO  club (c_id, l_id, c_name, c_foundationyear) VALUES (13, 2, 'Napoli', '1943');






INSERT INTO  manager (m_id, m_name, m_nationality) VALUES (1, 'Mina Raiola', 'Italian');
INSERT INTO  manager (m_id, m_name, m_nationality) VALUES (2, 'Jorge Mendes', 'Portuguese');
INSERT INTO  manager (m_id, m_name, m_nationality) VALUES (3, 'Omer', 'Turkish');
INSERT INTO  manager (m_id, m_name, m_nationality) VALUES (4, 'Kaleci Temsilcisi', 'French');





INSERT INTO  player (p_id, m_id, p_name, p_position, p_nationality, p_age) VALUES (1, 1, 'Ömer Diner', 'FW', 'Turkish', '21');
INSERT INTO  player (p_id, m_id, p_name, p_position, p_nationality, p_age) VALUES (2, 1, 'Vincent Aboubakar', 'FW', 'Cameroon', '29');
INSERT INTO  player (p_id, m_id, p_name, p_position, p_nationality, p_age) VALUES (3, 2, 'Rachid Ghezzal', 'FW', 'Algerian', '31');
INSERT INTO  player (p_id, m_id, p_name, p_position, p_nationality, p_age) VALUES (4, 2, 'Harry Kane', 'FW', 'English', '29');
INSERT INTO  player (p_id, m_id, p_name, p_position, p_nationality, p_age) VALUES (5, 3, 'Van Dijk', 'CB', 'Dutch', '32');
INSERT INTO  player (p_id, m_id, p_name, p_position, p_nationality, p_age) VALUES (6, 2, 'Ali', 'CB', 'Dutch', '19');
INSERT INTO  player (p_id, m_id, p_name, p_position, p_nationality, p_age) VALUES (7, 1, 'Veli', 'GK', 'Turkish', '25');
INSERT INTO  player (p_id, m_id, p_name, p_position, p_nationality, p_age) VALUES (8, 3, 'Deli', 'MF', 'Czech', '27');
INSERT INTO  player (p_id, m_id, p_name, p_position, p_nationality, p_age) VALUES (9, 4, 'De Gea', 'GK', 'Spanish', '33');
INSERT INTO  player (p_id, m_id, p_name, p_position, p_nationality, p_age) VALUES (10, 3, 'Mbappe', 'FW', 'French', '23');
INSERT INTO  player (p_id, m_id, p_name, p_position, p_nationality, p_age) VALUES (11, 2, 'Griezmann', 'FW', 'French', '28');
INSERT INTO  player (p_id, m_id, p_name, p_position, p_nationality, p_age) VALUES (12, 1, 'Dembele', 'FW', 'French', '25');
INSERT INTO  player (p_id, m_id, p_name, p_position, p_nationality, p_age) VALUES (13, 3, 'Onur Bulut', 'RB', 'Turkish', '26');
INSERT INTO  player (p_id, m_id, p_name, p_position, p_nationality, p_age) VALUES (14, 1, 'Englishman', 'MF', 'English', '35');
INSERT INTO  player (p_id, m_id, p_name, p_position, p_nationality, p_age) VALUES (15, 2, 'World Traveler', 'LB', 'Greek', '28');



INSERT INTO  playerclubhistory (pc_id, c_id, p_id, startdate) VALUES (1, 2, 1, '2022-06-01');
INSERT INTO  playerclubhistory (pc_id, c_id, p_id, startdate) VALUES (2, 1, 6, '2020-06-01');
INSERT INTO  playerclubhistory (pc_id, c_id, p_id, startdate) VALUES (3, 2, 6, '2021-01-01');
INSERT INTO  playerclubhistory (pc_id, c_id, p_id, startdate) VALUES (4, 1, 7, '2022-01-01');
INSERT INTO  playerclubhistory (pc_id, c_id, p_id, startdate) VALUES (5, 1, 8, '2019-06-10');
INSERT INTO  playerclubhistory (pc_id, c_id, p_id, startdate) VALUES (6, 3, 10, '2021-07-05');
INSERT INTO  playerclubhistory (pc_id, c_id, p_id, startdate) VALUES (7, 2, 11, '2021-06-04');
INSERT INTO  playerclubhistory (pc_id, c_id, p_id, startdate) VALUES (8, 3, 12, '2022-01-30');
INSERT INTO  playerclubhistory (pc_id, c_id, p_id, startdate) VALUES (9, 1, 14, '2014-01-01');
INSERT INTO  playerclubhistory (pc_id, c_id, p_id, startdate) VALUES (10, 3, 14, '2015-06-04');
INSERT INTO  playerclubhistory (pc_id, c_id, p_id, startdate) VALUES (11, 2, 14, '2017-01-25');
INSERT INTO  playerclubhistory (pc_id, c_id, p_id, startdate) VALUES (12, 4, 14, '2019-01-01');
INSERT INTO  playerclubhistory (pc_id, c_id, p_id, startdate) VALUES (13, 5, 14, '2020-01-02');
INSERT INTO  playerclubhistory (pc_id, c_id, p_id, startdate) VALUES (14, 1, 15, '2018-01-11');
INSERT INTO  playerclubhistory (pc_id, c_id, p_id, startdate) VALUES (15, 6, 15, '2019-01-17');
INSERT INTO  playerclubhistory (pc_id, c_id, p_id, startdate) VALUES (16, 11, 15, '2021-01-02');



INSERT INTO  transfer (t_id, c_id, p_id, type, date) VALUES (1, 2, 1, 'loan', '2022-06-01');
INSERT INTO  transfer (t_id, c_id, p_id, type, date) VALUES (2, 1, 6, 'full', '2020-06-01');
INSERT INTO  transfer (t_id, c_id, p_id, type, date) VALUES (3, 2, 6, 'full', '2021-01-01');
INSERT INTO  transfer (t_id, c_id, p_id, type, date) VALUES (4, 1, 7, 'loan', '2022-01-01');
INSERT INTO  transfer (t_id, c_id, p_id, type, date) VALUES (5, 1, 8, 'full', '2019-06-10');
INSERT INTO  transfer (t_id, c_id, p_id, type, date) VALUES (6, 3, 10, 'full', '2021-07-05');
INSERT INTO  transfer (t_id, c_id, p_id, type, date) VALUES (7, 2, 11, 'loan', '2021-06-04');
INSERT INTO  transfer (t_id, c_id, p_id, type, date) VALUES (8, 3, 12, 'full', '2022-01-30');
INSERT INTO  transfer (t_id, c_id, p_id, type, date) VALUES (9, 1, 14, 'loan', '2014-01-01');
INSERT INTO  transfer (t_id, c_id, p_id, type, date) VALUES (10, 3, 14, 'full', '2015-06-04');
INSERT INTO  transfer (t_id, c_id, p_id, type, date) VALUES (11, 2, 14, 'full', '2017-01-25');
INSERT INTO  transfer (t_id, c_id, p_id, type, date) VALUES (12, 4, 14, 'loan', '2019-01-01');
INSERT INTO  transfer (t_id, c_id, p_id, type, date) VALUES (13, 5, 14, 'full', '2020-01-02');
INSERT INTO  transfer (t_id, c_id, p_id, type, date) VALUES (14, 1, 15, 'full', '2018-01-11');
INSERT INTO  transfer (t_id, c_id, p_id, type, date) VALUES (15, 6, 15, 'loan', '2019-01-17');
INSERT INTO  transfer (t_id, c_id, p_id, type, date) VALUES (16, 11, 15, 'full', '2021-01-02');



INSERT INTO  paymentinfo (paymentid, t_id, amount, bank) VALUES (1, 1, '1750000', 'ING');

