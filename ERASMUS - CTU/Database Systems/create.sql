-- Remove conflicting tables
DROP TABLE IF EXISTS club CASCADE;
DROP TABLE IF EXISTS league CASCADE;
DROP TABLE IF EXISTS manager CASCADE;
DROP TABLE IF EXISTS paymentinfo CASCADE;
DROP TABLE IF EXISTS player CASCADE;
DROP TABLE IF EXISTS playerclubhistory CASCADE;
DROP TABLE IF EXISTS transfer CASCADE;
-- End of removing

CREATE TABLE club (
    c_id SERIAL NOT NULL,
    l_id INTEGER NOT NULL,
    c_name VARCHAR(256) NOT NULL,
    c_foundationyear VARCHAR(256) NOT NULL
);
ALTER TABLE club ADD CONSTRAINT pk_club PRIMARY KEY (c_id);

CREATE TABLE league (
    l_id SERIAL NOT NULL,
    l_name VARCHAR(256) NOT NULL,
    l_teamcount VARCHAR(256) NOT NULL,
    l_country VARCHAR(256) NOT NULL
);
ALTER TABLE league ADD CONSTRAINT pk_league PRIMARY KEY (l_id);

CREATE TABLE manager (
    m_id SERIAL NOT NULL,
    m_name VARCHAR(256) NOT NULL,
    m_nationality VARCHAR(256) NOT NULL
);
ALTER TABLE manager ADD CONSTRAINT pk_manager PRIMARY KEY (m_id);

CREATE TABLE paymentinfo (
    paymentid SERIAL NOT NULL,
    t_id INTEGER NOT NULL,
    amount VARCHAR(256) NOT NULL,
    bank VARCHAR(256) NOT NULL
);
ALTER TABLE paymentinfo ADD CONSTRAINT pk_paymentinfo PRIMARY KEY (paymentid, t_id);
ALTER TABLE paymentinfo ADD CONSTRAINT u_fk_paymentinfo_transfer UNIQUE (t_id);

CREATE TABLE player (
    p_id SERIAL NOT NULL,
    m_id INTEGER NOT NULL,
    p_name VARCHAR(256) NOT NULL,
    p_position VARCHAR(256) NOT NULL,
    p_nationality VARCHAR(256) NOT NULL,
    p_age VARCHAR(256) NOT NULL
);
ALTER TABLE player ADD CONSTRAINT pk_player PRIMARY KEY (p_id);

CREATE TABLE playerclubhistory (
    pc_id SERIAL NOT NULL,
    c_id INTEGER NOT NULL,
    p_id INTEGER NOT NULL,
    startdate VARCHAR(256) NOT NULL
);
ALTER TABLE playerclubhistory ADD CONSTRAINT pk_playerclubhistory PRIMARY KEY (pc_id);

CREATE TABLE transfer (
    t_id SERIAL NOT NULL,
    c_id INTEGER NOT NULL,
    p_id INTEGER NOT NULL,
    type VARCHAR(256) NOT NULL,
    date VARCHAR(256) NOT NULL
);
ALTER TABLE transfer ADD CONSTRAINT pk_transfer PRIMARY KEY (t_id);

ALTER TABLE club ADD CONSTRAINT fk_club_league FOREIGN KEY (l_id) REFERENCES league (l_id) ON DELETE CASCADE;

ALTER TABLE paymentinfo ADD CONSTRAINT fk_paymentinfo_transfer FOREIGN KEY (t_id) REFERENCES transfer (t_id) ON DELETE CASCADE;

ALTER TABLE player ADD CONSTRAINT fk_player_manager FOREIGN KEY (m_id) REFERENCES manager (m_id) ON DELETE CASCADE;

ALTER TABLE playerclubhistory ADD CONSTRAINT fk_playerclubhistory_club FOREIGN KEY (c_id) REFERENCES club (c_id) ON DELETE CASCADE;
ALTER TABLE playerclubhistory ADD CONSTRAINT fk_playerclubhistory_player FOREIGN KEY (p_id) REFERENCES player (p_id) ON DELETE CASCADE;

ALTER TABLE transfer ADD CONSTRAINT fk_transfer_club FOREIGN KEY (c_id) REFERENCES club (c_id) ON DELETE CASCADE;
ALTER TABLE transfer ADD CONSTRAINT fk_transfer_player FOREIGN KEY (p_id) REFERENCES player (p_id) ON DELETE CASCADE;

