/* RESET */
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

/* CORPO */
body {
    font-family: Arial, Helvetica, sans-serif;
    background: linear-gradient(180deg, #f4f6f9 0%, #eef3f9 100%);
    color: #222;
    line-height: 1.6;
}

/* MENU */
header {
    background: #1e1e1e;
    padding: 15px 0;
}

.menu {
    max-width: 1100px;
    margin: auto;
    display: flex;
    justify-content: flex-end;
    gap: 25px;
}

.menu a {
    color: white;
    text-decoration: none;
    font-weight: bold;
    transition: 0.3s;
}

.menu a:hover {
    color: #00f5ff;
    text-shadow: 0 0 8px rgba(0, 245, 255, 0.6);
}


/* CONTEÚDO PRINCIPAL */
main {
    max-width: 1100px;
    margin: 40px auto;
    padding: 0 20px;
}

/* TOPO */
.topo {
    text-align: center;
    margin-bottom: 40px;
}

.topo h1 {
    font-size: 2.5rem;
    margin-bottom: 10px;
}

.topo p {
    color: #555;
}

/* IMAGEM */
.banner {
    margin: 30px 0;
}

.banner img {
    width: 100%;
    height: 400px;
    object-fit: cover;
    border-radius: 12px;
    display: block;
}

.banner figcaption {
    text-align: center;
    font-size: 0.9rem;
    margin-top: 8px;
    color: #666;
}

/* SEÇÕES */
section {
    margin-bottom: 60px;
}

section h2 {
    font-size: 1.8rem;
    margin-bottom: 20px;
    padding-bottom: 8px;
    position: relative;
}

section h2::after {
    content: "";
    position: absolute;
    left: 50%;
    transform: translateX(-50%);
    bottom: 0;
    width: 80px;
    height: 3px;
    background: linear-gradient(90deg, #00f5ff, #3a86ff);
    border-radius: 5px;
}


/* ARTICLES */
article {
    margin-bottom: 30px;
}

article h3 {
    margin-bottom: 10px;
    color: #1e1e1e;
}

/* LISTAS */
ul {
    margin-left: 20px;
    margin-top: 10px;
}

li {
    margin-bottom: 6px;
}

/* AVALIAÇÃO destaque */
#avaliacao {
    background: #ffffff;
    padding: 25px;
    border-radius: 12px;
    box-shadow: 0 4px 12px rgba(0,0,0,0.08);
}

/* RESULTADO */
#resultado {
    background: #e8f7fa;
    padding: 25px;
    border-radius: 12px;
}

/* BOTÃO VOLTAR */
.botao-voltar {
    text-align: center;
    margin-top: 40px;
}

.botao-voltar a {
    background: #1e1e1e;
    color: white;
    padding: 10px 25px;
    text-decoration: none;
    border-radius: 8px;
    transition: 0.3s;
}

.botao-voltar a:hover {
    background: #00bcd4;
}

html {
    scroll-behavior: smooth;
}

/* Animação base */
@keyframes aparecerSuave {
    from {
        opacity: 0;
        transform: translateY(30px);
    }
    to {
        opacity: 1;
        transform: translateY(0);
    }
}

/* Aplicando nas sections */
section {
    margin-bottom: 60px;
    animation: aparecerSuave 0.8s ease-out;
}


/* LISTA DE SÉRIES */
.lista-series {
    list-style: none;
    margin-top: 30px;
    display: flex;
    flex-wrap: wrap;
    justify-content: center;
    gap: 15px;
}

.lista-series li a {
    display: inline-block;
    padding: 12px 20px;
    border-radius: 25px;
    text-decoration: none;
    font-weight: bold;
    color: white;
    transition: 0.3s ease;
}

.lista-series li a:hover {
    transform: translateY(-3px);
    box-shadow: 0 0 12px rgba(0, 245, 255, 0.6);
}


/* CORES DIFERENTES PARA CADA SÉRIE */

.lista-series li:nth-child(1) a {
    background-color: #ff6b6b; /* Jardim */
}

.lista-series li:nth-child(2) a {
    background-color: #f7b801; /* 1º ano */
}

.lista-series li:nth-child(3) a {
    background-color: #6a4c93; /* 2º ano */
}

.lista-series li:nth-child(4) a {
    background-color: #1982c4; /* 3º ano */
}

.lista-series li:nth-child(5) a {
    background-color: #2ec4b6; /* 4º ano */
}

.lista-series li:nth-child(6) a {
    background-color: #3a86ff; /* 5º ano */
}

/* EFEITO HOVER */
.lista-series li a:hover {
    transform: scale(1.05);
    opacity: 0.9;
}


/* BLOCO SOBRE */
#sobre {
    max-width: 900px;
    margin: 0 auto;
}

#sobre figure {
    text-align: center;
}

#sobre img {
    display: block;
    margin: 0 auto;
    max-width: 100%;
    border-radius: 12px;
}

#sobre p {
    text-align: justify;
    margin-top: 20px;
}


figure {
    text-align: center;
}

figure img {
    display: block;
    margin: 0 auto;
}


/* RODAPÉ COM MARCA D’ÁGUA */


/* Marca d’água */
.rodape::before {
    content: "";
    position: absolute;
    inset: 0;
    background: url("logo-sd.png") no-repeat center;
    background-size: 300px;
    opacity: 0.05;
    pointer-events: none;
}

/* Conteúdo acima da marca */
.rodape-conteudo {
    position: relative;
    max-width: 800px;
    margin: 0 auto;
    text-align: center;
    z-index: 2;
}

.nome {
    font-size: 1.1rem;
    letter-spacing: 1px;
    margin-bottom: 12px;
    color: #eaeaea;
}

.nome span {
    font-weight: 600;
    color: #00bcd4;
    position: relative;
}

.nome span::after {
    content: "";
    position: absolute;
    left: 0;
    bottom: -4px;
    width: 100%;
    height: 1px;
    background: rgba(0,188,212,0.6);
}

.rodape a {
    color: #00bcd4;
    text-decoration: none;
    transition: 0.3s;
}

.rodape a:hover {
    opacity: 0.8;
}

/* RODAPÉ */
.rodape {
    background: #111;
    color: #ddd;
    text-align: center;
    padding: 40px 20px;
    margin-top: 60px;
    font-size: 0.95rem;
}

/* Nome com destaque elegante */
.nome {
    font-size: 1.1rem;
    letter-spacing: 1px;
    margin-bottom: 12px;
    color: #eaeaea;
}

.nome span {
    font-weight: 600;
    color: #00bcd4;
    position: relative;
}

.nome span::after {
    content: "";
    position: absolute;
    left: 0;
    bottom: -4px;
    width: 100%;
    height: 1px;
    background: rgba(0,188,212,0.6);
}

/* Contatos */
.contatos {
    margin-top: 15px;
    display: flex;
    flex-direction: column;
    gap: 6px;
}

.contatos a {
    color: #aaa;
    text-decoration: none;
    transition: 0.3s;
}

.contatos a:hover {
    color: #00bcd4;
}


/* RODAPÉ PREMIUM */
.rodape {
    background: linear-gradient(180deg, #111 0%, #0a0a0a 100%);
    color: #ddd;
    text-align: center;
    padding: 60px 20px;
    margin-top: 80px;
    position: relative;
    overflow: hidden;
}

/* Linha superior sutil */
.rodape::before {
    content: "";
    position: absolute;
    top: 0;
    left: 50%;
    transform: translateX(-50%);
    width: 60%;
    height: 2px;
    background: linear-gradient(90deg, transparent, #00bcd4, transparent);
}

/* Bloco assinatura */
.assinatura {
    margin-bottom: 25px;
}

/* Nome com presença */
.nome {
    font-size: 1.3rem;
    letter-spacing: 1px;
    margin-bottom: 8px;
    color: #f5f5f5;
}

.nome span {
    color: #00bcd4;
    font-weight: 600;
    text-shadow: 0 0 6px rgba(0,188,212,0.4);
}

/* Ano */
.ano {
    font-size: 0.9rem;
    color: #aaa;
    letter-spacing: 1px;
}

/* Contatos */
.contatos {
    display: flex;
    justify-content: center;
    gap: 25px;
    flex-wrap: wrap;
}

.contatos a {
    color: #aaa;
    text-decoration: none;
    position: relative;
    transition: 0.3s;
    font-size: 0.95rem;
}

.contatos a::after {
    content: "";
    position: absolute;
    width: 0;
    height: 1px;
    bottom: -3px;
    left: 0;
    background: #00bcd4;
    transition: 0.3s;
}

.contatos a:hover {
    color: #00bcd4;
}

.contatos a:hover::after {
    width: 100%;
}


/* ============================= */
/* RODAPÉ FUTURISTA              */
/* ============================= */

.rodape {
    background: radial-gradient(circle at top, #111 0%, #050505 70%);
    color: #ddd;
    text-align: center;
    padding: 70px 20px;
    margin-top: 100px;
    position: relative;
    overflow: hidden;
}

/* Linha neon animada */
.rodape::before {
    content: "";
    position: absolute;
    top: 0;
    left: 50%;
    transform: translateX(-50%);
    width: 70%;
    height: 2px;
    background: linear-gradient(90deg, transparent, #00f0ff, #00bcd4, transparent);
    animation: linhaGlow 4s linear infinite;
}

/* Glow pulsando no fundo */
.rodape::after {
    content: "";
    position: absolute;
    bottom: -150px;
    left: 50%;
    transform: translateX(-50%);
    width: 500px;
    height: 300px;
    background: radial-gradient(circle, rgba(0,188,212,0.15) 0%, transparent 70%);
    animation: pulsar 6s ease-in-out infinite;
}

/* Animações */
@keyframes linhaGlow {
    0% { opacity: 0.4; }
    50% { opacity: 1; }
    100% { opacity: 0.4; }
}

@keyframes pulsar {
    0% { transform: translateX(-50%) scale(1); opacity: 0.5; }
    50% { transform: translateX(-50%) scale(1.1); opacity: 0.8; }
    100% { transform: translateX(-50%) scale(1); opacity: 0.5; }
}

/* Nome */
.nome {
    font-size: 1.4rem;
    letter-spacing: 1px;
    margin-bottom: 10px;
    color: #f5f5f5;
}

.nome span {
    color: #00f0ff;
    font-weight: 600;
    text-shadow: 
        0 0 6px rgba(0,240,255,0.6),
        0 0 12px rgba(0,240,255,0.3);
}

/* Ano */
.ano {
    font-size: 0.9rem;
    color: #aaa;
    letter-spacing: 1px;
    margin-bottom: 25px;
}

/* Contatos */
.contatos {
    display: flex;
    justify-content: center;
    gap: 30px;
    flex-wrap: wrap;
}

.contatos a {
    color: #aaa;
    text-decoration: none;
    font-size: 0.95rem;
    position: relative;
    transition: 0.3s;
}

.contatos a:hover {
    color: #00f0ff;
    text-shadow: 0 0 6px rgba(0,240,255,0.6);
}

/* ===== EFEITO FUTURISTA NAS SÉRIES ===== */

.lista-series li a {
    position: relative;
    overflow: hidden;
}

/* Partículas */
.lista-series li a::after {
    content: "⚙ ✨ 💻";
    position: absolute;
    top: 50%;
    left: 50%;
    transform: translate(-50%, -50%) scale(0.5);
    opacity: 0;
    font-size: 18px;
    pointer-events: none;
    transition: all 0.4s ease;
}

/* Ativação no hover */
.lista-series li a:hover::after {
    opacity: 0.35;
    transform: translate(-50%, -90%) scale(1.1);
}

/* ===== CINEMATIC HOVER ===== */

.lista-series li a {
    position: relative;
    overflow: hidden;
    transition: all 0.4s ease;
}

/* Luz expansiva */
.lista-series li a::before {
    content: "";
    position: absolute;
    top: 50%;
    left: 50%;
    width: 0;
    height: 0;
    background: radial-gradient(circle, rgba(255,255,255,0.6) 0%, rgba(255,255,255,0) 70%);
    transform: translate(-50%, -50%);
    transition: width 0.4s ease, height 0.4s ease;
    border-radius: 50%;
}

/* Partículas */
.lista-series li a::after {
    content: "";
    position: absolute;
    inset: 0;
    background-image: radial-gradient(white 1px, transparent 1px);
    background-size: 20px 20px;
    opacity: 0;
    animation: particulas 0.6s linear infinite;
}

/* Ativação */
.lista-series li a:hover {
    transform: scale(1.08);
    box-shadow: 0 0 20px rgba(255,255,255,0.6),
                0 0 40px rgba(0,255,255,0.6);
}

.lista-series li a:hover::before {
    width: 300px;
    height: 300px;
}

.lista-series li a:hover::after {
    opacity: 0.3;
}

/* Animação partículas */
@keyframes particulas {
    from {
        background-position: 0 0;
    }
    to {
        background-position: 0 -20px;
    }
}

/* ===== IMPACTO CINEMATOGRÁFICO ===== */

.lista-series li a {
    position: relative;
    overflow: hidden;
    transition: transform 0.3s ease, box-shadow 0.3s ease;
}

/* Glow dinâmico */
.lista-series li:nth-child(1) a:hover { box-shadow: 0 0 25px #ff6b6b; }
.lista-series li:nth-child(2) a:hover { box-shadow: 0 0 25px #f7b801; }
.lista-series li:nth-child(3) a:hover { box-shadow: 0 0 25px #6a4c93; }
.lista-series li:nth-child(4) a:hover { box-shadow: 0 0 25px #1982c4; }
.lista-series li:nth-child(5) a:hover { box-shadow: 0 0 25px #2ec4b6; }
.lista-series li:nth-child(6) a:hover { box-shadow: 0 0 25px #3a86ff; }

/* Crescimento suave */
.lista-series li a:hover {
    transform: scale(1.1);
}

/* Rastro tipo foguete */
.lista-series li a::after {
    content: "";
    position: absolute;
    left: -50%;
    top: 0;
    width: 200%;
    height: 100%;
    background: linear-gradient(
        120deg,
        transparent,
        rgba(255,255,255,0.4),
        transparent
    );
    transform: skewX(-20deg);
    transition: 0.6s;
    opacity: 0;
}

.lista-series li a:hover::after {
    left: 100%;
    opacity: 1;
}

/* Micro faíscas */
.lista-series li a::before {
    content: "";
    position: absolute;
    inset: 0;
    background-image: radial-gradient(white 1px, transparent 1px);
    background-size: 15px 15px;
    opacity: 0;
    transition: 0.3s

}

.lista-series li a:hover::before {
    opacity: 0.3;
    animation: faíscas 0.5s linear infinite;
}

@keyframes faíscas {
    from { background-position: 0 0; }
    to { background-position: 0 -15px; }
}


/* Fundo escurecendo */
body::after {
    content: "";
    position: fixed;
    inset: 0;
    background: rgba(0,0,0,0);
    pointer-events: none;
    transition: 0.4s ease;
    z-index: 1;
}

.lista-series li a:hover ~ body::after {
    background: rgba(0,0,0,0.25);
}


