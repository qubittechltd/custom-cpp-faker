#pragma once

#include <array>
#include <string_view>

#include "faker-cxx/movie.h"

namespace faker::movie
{
const auto actors = std::to_array<std::string_view>({
    "Aamir Khan",
    "Abbott and Costello",
    "Adel Imam",
    "Ahmed Zaki",
    "Al Pacino",
    "Alain Delon",
    "Alan Arkin",
    "Alan Rickman",
    "Alastair Sim",
    "Albert Finney",
    "Alberto Sordi",
    "Alec Guinness",
    "Amitabh Bachchan",
    "Andy Serkis",
    "Anthony Hopkins",
    "Anthony Perkins",
    "Anthony Quinn",
    "Armin Mueller-Stahl",
    "Arnold Schwarzenegger",
    "Arthur Kennedy",
    "Bela Lugosi",
    "Ben Kingsley",
    "Benicio del Toro",
    "Bill Murray",
    "Bing Crosby",
    "Bob Hope",
    "Bob Hoskins",
    "Boris Karloff",
    "Bourvil",
    "Brad Pitt",
    "Brendan Gleeson",
    "Bruce Lee",
    "Bruno Ganz",
    "Burt Lancaster",
    "Buster Keaton",
    "Cantinflas",
    "Cary Grant",
    "Charles Boyer",
    "Charles Chaplin",
    "Charles Laughton",
    "Charlton Heston",
    "Chishu Ryu",
    "Choi Min-sik",
    "Chow Yun-fat",
    "Chris Cooper",
    "Christian Bale",
    "Christopher Lee",
    "Christopher Walken",
    "Clark Gable",
    "Claude Rains",
    "Clint Eastwood",
    "Conrad Veidt",
    "Dana Andrews",
    "Daniel Auteuil",
    "Daniel Day-Lewis",
    "David Niven",
    "Denholm Elliott",
    "Dennis Hopper",
    "Denzel Washington",
    "Dev Anand",
    "Dilip Kumar",
    "Dirk Bogarde",
    "Don Cheadle",
    "Donald Crisp",
    "Donald Sutherland",
    "Douglas Fairbanks",
    "Dustin Hoffman",
    "Ed Harris",
    "Edward Everett Horton",
    "Edward G. Robinson",
    "Edward Norton",
    "Eli Wallach",
    "Emil Jannings",
    "Erich von Stroheim",
    "Erland Josephson",
    "Ernest Borgnine",
    "Errol Flynn",
    "Ewan McGregor",
    "Farid Shawqi",
    "Fernandel",
    "Fernando Fernán Gómez",
    "Fernando Rey",
    "Frank Sinatra",
    "Fred Astaire",
    "Fredric March",
    "Gael García Bernal",
    "Gary Cooper",
    "Gary Oldman",
    "Gaston Modot",
    "Gene Hackman",
    "Gene Kelly",
    "Gene Wilder",
    "Geoffrey Rush",
    "George C. Scott",
    "George Clooney",
    "George Sanders",
    "Gert Fröbe",
    "Gian Maria Volonté",
    "Giancarlo Giannini",
    "Glenn Ford",
    "Gregory Peck",
    "Groucho Marx / The Marx Brothers",
    "Gunnar Björnstrand",
    "Gérard Depardieu",
    "Gérard Philipe",
    "Harold Lloyd",
    "Harrison Ford",
    "Harry Dean Stanton",
    "Harvey Keitel",
    "Heath Ledger",
    "Henry Fonda",
    "Humphrey Bogart",
    "Ian McKellen",
    "Innokenty Smoktunovsky",
    "Jack Lemmon",
    "Jack Nicholson",
    "Jackie Chan",
    "Jacques Tati",
    "Jake Gyllenhaal",
    "James Caan",
    "James Cagney",
    "James Coburn",
    "James Dean",
    "James Earl Jones",
    "James Mason",
    "James Woods",
    "Jason Robards",
    "Javier Bardem",
    "Jean Gabin",
    "Jean Hersholt",
    "Jean Marais",
    "Jean-Claude Brialy",
    "Jean-Louis Trintignant",
    "Jean-Paul Belmondo",
    "Jean-Pierre Léaud",
    "Jeff Bridges",
    "Jeremy Irons",
    "Jerry Lewis",
    "Jim Carrey",
    "Joaquin Phoenix",
    "Joe Pesci",
    "Joel McCrea",
    "John Barrymore",
    "John Carradine",
    "John Cleese",
    "John Gielgud",
    "John Gilbert",
    "John Hurt",
    "John Malkovich",
    "John Travolta",
    "John Wayne",
    "Johnny Depp",
    "Jon Voight",
    "Joseph Cotten",
    "José Ferrer",
    "Karl Malden",
    "Kenneth Branagh",
    "Kevin Spacey",
    "King Baggot",
    "Kirk Douglas",
    "Klaus Kinski",
    "Laurel and Hardy",
    "Laurence Olivier",
    "Lee J. Cobb",
    "Lee Marvin",
    "Leonardo DiCaprio",
    "Leslie Cheung",
    "Leslie Howard",
    "Liam Neeson",
    "Lionel Barrymore",
    "Lon Chaney",
    "Louis de Funès",
    "Mack Sennett",
    "Marcello Mastroianni",
    "Marlon Brando",
    "Martin Balsam",
    "Martin Landau",
    "Martin Sheen",
    "Matt Damon",
    "Matthew McConaughey",
    "Max Linder",
    "Max von Sydow",
    "Maximilian Schell",
    "Mel Gibson",
    "Melvyn Douglas",
    "Michael Caine",
    "Michael Chekhov",
    "Michael Douglas",
    "Michael Fassbender",
    "Michael Redgrave",
    "Michel Piccoli",
    "Michel Serrault",
    "Michel Simon",
    "Mickey Rooney",
    "Montgomery Clift",
    "Morgan Freeman",
    "Nanni Moretti",
    "Naseeruddin Shah",
    "Nicolas Cage",
    "Nikolay Cherkasov",
    "Nino Manfredi",
    "Omar Sharif",
    "Orson Welles",
    "Paul Muni",
    "Paul Newman",
    "Paul Robeson",
    "Paul Scofield",
    "Paul Winfield",
    "Pedro Infante",
    "Peter Cushing",
    "Peter Finch",
    "Peter Lorre",
    "Peter O'Toole",
    "Peter Sellers",
    "Philip Seymour Hoffman",
    "Philippe Noiret",
    "Raimu",
    "Raj Kapoor",
    "Rajesh Khanna",
    "Ralph Fiennes",
    "Ralph Richardson",
    "Rex Harrison",
    "Richard Attenborough",
    "Richard Burton",
    "Richard Dreyfuss",
    "Richard Gere",
    "Richard Harris",
    "Richard Widmark",
    "Robert De NiroJames Stewart",
    "Robert Donat",
    "Robert Downey Jr.",
    "Robert Duvall",
    "Robert Mitchum",
    "Robert Redford",
    "Robert Ryan",
    "Robert Shaw",
    "Roberto Benigni",
    "Robin Williams",
    "Rock Hudson",
    "Rod Steiger",
    "Ronald Colman",
    "Roscoe 'Fatty' Arbuckle",
    "Roy Scheider",
    "Rudolf Klein-Rogge",
    "Rudolph Valentino",
    "Russell Crowe",
    "Rutger Hauer",
    "Ryan Gosling",
    "Samuel L. Jackson",
    "Sean Connery",
    "Sean Penn",
    "Sessue Hayakawa",
    "Shah Rukh Khan",
    "Sidney Poitier",
    "Spencer Tracy",
    "Stellan Skarsgård",
    "Sterling Hayden",
    "Steve Buscemi",
    "Steve Martin",
    "Steve McQueen",
    "Takashi Shimura",
    "Takeshi Kitano",
    "Tatsuya Nakadai",
    "The Three Stooges",
    "Thomas Mitchell",
    "Tim Robbins",
    "Tom Courtenay",
    "Tom Cruise",
    "Tom Hanks",
    "Tommy Lee Jones",
    "Tony Curtis",
    "Tony Leung Chiu Wai",
    "Toshiro Mifune",
    "Totò",
    "Ugo Tognazzi",
    "Uttam Kumar",
    "Victor Mature",
    "Victor McLaglen",
    "Viggo Mortensen",
    "Vincent Cassel",
    "Vincent Price",
    "Vittorio Gassman",
    "W.C. Fields",
    "Wallace Beery",
    "Walter Brennan",
    "Walter Huston",
    "Walter Matthau",
    "Walter Pidgeon",
    "Warren Beatty",
    "Will Smith",
    "Willem Dafoe",
    "William Holden",
    "William Hurt",
    "William Powell",
    "William S. Hart",
    "Woody Allen",
    "Woody Harrelson",
    "Yul Brynner",
    "Yves Montand",
});

const auto actresses = std::to_array<std::string_view>({
    "Agnes Moorehead",
    "Aishwarya Rai",
    "Alida Valli",
    "Amy Adams",
    "Angela Bassett",
    "Angela Lansbury",
    "Angelina Jolie",
    "Anjelica Huston",
    "Ann-Margret",
    "Anna Karina",
    "Anna Magnani",
    "Anna May Wong",
    "Anne Bancroft",
    "Anne Baxter",
    "Anne Hathaway",
    "Anne Revere",
    "Annette Bening",
    "Annie Girardot",
    "Anouk Aimée",
    "Arletty",
    "Asha Parekh",
    "Asta Nielsen",
    "Audrey Hepburn",
    "Audrey Tautou",
    "Ava Gardner",
    "Barbara Hershey",
    "Barbara Stanwyck",
    "Barbra Streisand",
    "Bette Davis",
    "Bette Midler",
    "Betty Grable",
    "Beulah Bondi",
    "Bibi Andersson",
    "Blanche Sweet",
    "Brenda Blethyn",
    "Brigitte Bardot",
    "Cameron Diaz",
    "Carmen Maura",
    "Carmen Miranda",
    "Carole Lombard",
    "Cate Blanchett",
    "Catherine Deneuve",
    "Catherine Frot",
    "Catherine Zeta-Jones",
    "Charlize Theron",
    "Charlotte Gainsbourg",
    "Charlotte Rampling",
    "Claire Trevor",
    "Clara Bow",
    "Clara Kimball Young",
    "Claudette Colbert",
    "Claudia Cardinale",
    "Colleen Moore",
    "Danielle Darrieux",
    "Debbie Reynolds",
    "Deborah Kerr",
    "Debra Winger",
    "Delphine Seyrig",
    "Diane Keaton",
    "Diane Ladd",
    "Dianne Wiest",
    "Dolores Costello",
    "Dolores del Río",
    "Donna Reed",
    "Doris Day",
    "Dorothy Dandridge",
    "Dorothy Gish",
    "Edith Evans",
    "Eleanor Parker",
    "Elizabeth Taylor",
    "Ellen Burstyn",
    "Elsa Lanchester",
    "Emily Watson",
    "Emma Stone",
    "Emma Thompson",
    "Emmanuelle Béart",
    "Emmanuelle Riva",
    "Ethel Barrymore",
    "Eva Marie Saint",
    "Faina Ranevskaya",
    "Fanny Ardant",
    "Fatemeh Motamed-Arya",
    "Faten Hamama",
    "Faye Dunaway",
    "Florence Lawrence",
    "Frances McDormand",
    "Francesca Bertini",
    "Geena Davis",
    "Gena Rowlands",
    "Gene Tierney",
    "Geraldine Page",
    "Gina Lollobrigida",
    "Ginger Rogers",
    "Gisèle Casadesus",
    "Giulietta Masina",
    "Glenda Jackson",
    "Glenn Close",
    "Gloria Grahame",
    "Gloria Swanson",
    "Goldie Hawn",
    "Golshifteh Farahani",
    "Gong Li",
    "Grace Kelly",
    "Greer Garson",
    "Greta Garbo",
    "Gwyneth Paltrow",
    "Halle Berry",
    "Hamideh Kheiradabi",
    "Hanna Schygulla",
    "Harriet Andersson",
    "Hedy Lamarr",
    "Helen Mirren",
    "Helena Bonham Carter",
    "Hema Malini",
    "Henny Porten",
    "Hilary Swank",
    "Hind Rostom",
    "Holly Hunter",
    "Ingrid Bergman",
    "Ingrid Thulin",
    "Irene Dunne",
    "Irène Jacob",
    "Isabelle Adjani",
    "Isabelle Huppert",
    "Jacqueline Bisset",
    "Jane Alexander",
    "Jane Fonda",
    "Jane Wyman",
    "Janet Gaynor",
    "Janet Leigh",
    "Jaya Bachchan",
    "Jayne Mansfield",
    "Jean Arthur",
    "Jean Harlow",
    "Jean Seberg",
    "Jean Simmons",
    "Jeanne Moreau",
    "Jennifer Connelly",
    "Jennifer Jason Leigh",
    "Jennifer Jones",
    "Jennifer Lawrence",
    "Jessica Chastain",
    "Jessica Lange",
    "Jessica Tandy",
    "Joan Allen",
    "Joan Bennett",
    "Joan Blondell",
    "Joan Crawford",
    "Joan Fontaine",
    "Joanne Woodward",
    "Jodie Foster",
    "Judi Dench",
    "Judith Anderson",
    "Judy Davis",
    "Judy Garland",
    "Julia Roberts",
    "Julianne Moore",
    "Julie Andrews",
    "Julie Christie",
    "Juliette Binoche",
    "Kajol",
    "Kate Winslet",
    "Katharine Hepburn",
    "Kathleen Turner",
    "Kathy Bates",
    "Katy Jurado",
    "Keira Knightley",
    "Kinuyo Tanaka",
    "Kristin Scott Thomas",
    "Kyoko Kagawa",
    "Lana Turner",
    "Laura Dern",
    "Laura Linney",
    "Lauren Bacall",
    "Lee Remick",
    "Leila Hatami",
    "Leslie Caron",
    "Lilli Palmer",
    "Lillian Gish",
    "Liv Ullmann",
    "Liza Minnelli",
    "Louise Brooks",
    "Luise Rainer",
    "Lupe Vélez",
    "Lyubov Orlova",
    "Lyudmila Gurchenko",
    "Mabel Normand",
    "Machiko Kyo",
    "Madhubala",
    "Madhuri Dixit",
    "Mae West",
    "Maggie Cheung",
    "Maggie Smith",
    "Marcia Gay Harden",
    "Margherita Buy",
    "Maria Félix",
    "Maria Montez",
    "Maria Ouspenskaya",
    "Maria Schell",
    "Mariam Fakhr Eddine",
    "Mariangela Melato",
    "Maribel Verdú",
    "Marie Dressler",
    "Marilyn Monroe",
    "Marion Cotillard",
    "Marisa Tomei",
    "Marlene Dietrich",
    "Mary Astor",
    "Mary Pickford",
    "Mary Queeny",
    "María Antonieta Pons",
    "Maureen O'Hara",
    "Maureen Stapleton",
    "Meena Kumari",
    "Mercedes McCambridge",
    "Meryl Streep",
    "Mia Farrow",
    "Michelle Pfeiffer",
    "Michelle Williams",
    "Michelle Yeoh",
    "Michèle Morgan",
    "Mieko Harada",
    "Miou-Miou",
    "Miriam Hopkins",
    "Monica Bellucci",
    "Monica Vitti",
    "Myrna Loy",
    "Naomi Watts",
    "Nargis",
    "Natalie Portman",
    "Natalie Wood",
    "Nathalie Baye",
    "Nicole Kidman",
    "Nimmi",
    "Norma Shearer",
    "Norma Talmadge",
    "Nutan",
    "Octavia Spencer",
    "Olivia de Havilland",
    "Patricia Neal",
    "Paulette Goddard",
    "Penélope Cruz",
    "Piper Laurie",
    "Pola Negri",
    "Raquel Welch",
    "Reese Witherspoon",
    "Renée Zellweger",
    "Rita Hayworth",
    "Romy Schneider",
    "Rooney Mara",
    "Rosalind Russell",
    "Ruan Lingyu",
    "Ruth Gordon",
    "Sally Field",
    "Salma Hayek",
    "Sandra Bullock",
    "Sandrine Bonnaire",
    "Sara García",
    "Scarlett Johansson",
    "Setsuko Hara",
    "Shadia",
    "Sharon Stone",
    "Shelley Winters",
    "Shirley MacLaine",
    "Shirley Temple",
    "Shohreh Aghdashloo",
    "Sigourney Weaver",
    "Silvana Mangano",
    "Simone Signoret",
    "Simone Simon",
    "Sissy Spacek",
    "Soad Hosny",
    "Sophia Loren",
    "Sridevi",
    "Stefania Sandrelli",
    "Stéphane Audran",
    "Suchitra Sen",
    "Susan Hayward",
    "Susan Sarandon",
    "Sylvia Chang",
    "Teresa Wright",
    "Theda Bara",
    "Thelma Ritter",
    "Tilda Swinton",
    "Uma Thurman",
    "Valeria Golino",
    "Vanessa Redgrave",
    "Vera Kholodnaya",
    "Veronica Lake",
    "Victoria Abril",
    "Vilma Bánky",
    "Viola Davis",
    "Virna Lisi",
    "Vivien Leigh",
    "Vyjayanthimala",
    "Wendy Hiller",
    "Whoopi Goldberg",
    "Winona Ryder",
    "Yousra",
    "Zhang Ziyi",
});

const auto directors = std::to_array<std::string_view>({
    "Abbas Kiarostami",
    "Abel Gance",
    "Agnès Varda",
    "Aki Kaurismäki",
    "Akira Kurosawa",
    "Alain Resnais",
    "Alan J. Pakula",
    "Albert & David Maysles",
    "Alejandro González Iñárritu",
    "Alejandro Jodorowsky",
    "Alexander Dovzhenko",
    "Alexander Mackendrick",
    "Alexander Payne",
    "Alexander Sokurov",
    "Alfonso Cuarón",
    "Alfred Hitchcock",
    "Alice Guy-Blaché",
    "Allan Dwan",
    "Andrei Tarkovsky",
    "Andrzej Wajda",
    "Andy Warhol/Paul Morrissey",
    "Ang Lee",
    "Anthony Asquith",
    "Anthony Mann",
    "Apichatpong Weerasethakul",
    "Arthur Penn",
    "Bernardo Bertolucci",
    "Billy Wilder",
    "Blake Edwards",
    "Bob Clampett",
    "Bong Joon-Ho",
    "Boris Barnet",
    "Brian De Palma",
    "Budd Boetticher",
    "Busby Berkeley",
    "Buster Keaton",
    "Béla Tarr",
    "Carl Theodor Dreyer",
    "Carol Reed",
    "Cecil B. DeMille",
    "Cecil Hepworth",
    "Chantal Akerman",
    "Charles Burnett",
    "Charles Chaplin",
    "Chen Kaige",
    "Chris Marker",
    "Christopher Nolan",
    "Chuck Jones",
    "Claire Denis",
    "Clarence Brown",
    "Claude Chabrol",
    "Claude Lanzmann",
    "Clint Eastwood",
    "Costa-Gavras",
    "D. A. Pennebaker",
    "D. W. Griffith",
    "Danny Boyle",
    "Dario Argento",
    "Darren Aronofsky",
    "Dave Fleischer",
    "David Cronenberg",
    "David Fincher",
    "David Lean",
    "David Lynch",
    "David O. Russell",
    "Don Siegel",
    "Dorothy Arzner",
    "Douglas Sirk",
    "Dziga Vertov",
    "Edgar G. Ulmer",
    "Edward Yang",
    "Edwin S. Porter",
    "Elia Kazan",
    "Emir Kusturica",
    "Erich von Stroheim",
    "Ernst Lubitsch",
    "Errol Morris",
    "F. W. Murnau",
    "Federico Fellini",
    "Francis Ford Coppola",
    "Frank Borzage",
    "Frank Capra",
    "François Truffaut",
    "Fred Niblo",
    "Fred Zinnemann",
    "Frederick Wiseman",
    "Fritz Lang",
    "G. W. Pabst",
    "George A. Romero",
    "George Cukor",
    "George Lucas",
    "George Miller",
    "George Stevens",
    "Georges Franju",
    "Georges Méliès",
    "Glauber Rocha",
    "Gordon Parks",
    "Guillermo del Toro",
    "Gus Van Sant",
    "Guy Maddin",
    "Hal Ashby",
    "Hayao Miyazaki",
    "Henri-Georges Clouzot",
    "Henry Hathaway",
    "Henry King",
    "Herschell Gordon Lewis",
    "Hou Hsiao-Hsien",
    "Howard Hawks",
    "Ida Lupino",
    "Ingmar Bergman",
    "Ishirō Honda",
    "J. Stuart Blackton",
    "Jack Arnold",
    "Jacques Becker",
    "Jacques Demy",
    "Jacques Rivette",
    "Jacques Tati",
    "Jacques Tourneur",
    "James Cameron",
    "James Ivory",
    "James Whale",
    "Jan Švankmajer",
    "Jane Campion",
    "Jean Cocteau",
    "Jean Renoir",
    "Jean Rouch",
    "Jean Vigo",
    "Jean-Luc Godard",
    "Jean-Pierre & Luc Dardenne",
    "Jean-Pierre Melville",
    "Jerry Lewis",
    "Jia Zhangke",
    "Jim Jarmusch",
    "Joel & Ethan Coen",
    "John Boorman",
    "John Carpenter",
    "John Cassavetes",
    "John Ford",
    "John Frankenheimer",
    "John Hughes",
    "John Huston",
    "John Landis",
    "John Lasseter",
    "John Sayles",
    "John Schlesinger",
    "John Waters",
    "John Woo",
    "Jonathan Demme",
    "Joris Ivens",
    "Josef von Sternberg",
    "Joseph L. Mankiewicz",
    "Joseph Losey",
    "Jules Dassin",
    "Julien Duvivier",
    "Kathryn Bigelow",
    "Ken Loach",
    "Ken Russell",
    "Kenji Mizoguchi",
    "Kenneth Anger",
    "Kevin Smith",
    "King Vidor",
    "Kon Ichikawa",
    "Krzysztof Kieślowski",
    "Lars von Trier",
    "Lasse Hallström",
    "Leni Riefenstahl",
    "Leo McCarey",
    "Lev Kuleshov",
    "Lindsay Anderson",
    "Lois Weber",
    "Louis & Auguste Lumière",
    "Louis Feuillade",
    "Louis Malle",
    "Luchino Visconti",
    "Luis Buñuel",
    "Luis García Berlanga",
    "Mack Sennett",
    "Manoel de Oliveira",
    "Marcel Carné",
    "Mario Bava",
    "Mario Monicelli",
    "Martin Scorsese",
    "Maurice Tourneur",
    "Mauritz Stiller",
    "Max Ophüls",
    "Maya Deren",
    "Mel Brooks",
    "Mervyn LeRoy",
    "Michael Cimino",
    "Michael Curtiz",
    "Michael Haneke",
    "Michael Mann",
    "Michael Powell (& Emeric Pressburger)",
    "Michelangelo Antonioni",
    "Mike Leigh",
    "Mike Nichols",
    "Mikio Naruse",
    "Miklós Jancsó",
    "Miloš Forman",
    "Mohsen Makhmalbaf",
    "Morris Engel",
    "Nagisa Ōshima",
    "Nicholas Ray",
    "Nicolas Roeg",
    "Nuri Bilge Ceylan",
    "Oliver Stone",
    "Olivier Assayas",
    "Orson Welles",
    "Oscar Micheaux",
    "Otto Preminger",
    "Ousmane Sembène",
    "Paul Greengrass",
    "Paul Thomas Anderson",
    "Paul Verhoeven",
    "Pedro Almodóvar",
    "Pedro Costa",
    "Peter Bogdanovich",
    "Peter Greenaway",
    "Peter Jackson",
    "Peter Watkins",
    "Peter Weir",
    "Pier Paolo Pasolini",
    "Preston Sturges",
    "Quentin Tarantino",
    "Rainer Werner Fassbinder",
    "Raj Kapoor",
    "Ralph Bakshi",
    "Raoul Walsh",
    "René Clair",
    "Richard Donner",
    "Richard Lester",
    "Richard Linklater",
    "Ridley Scott",
    "Rob Reiner",
    "Robert Aldrich",
    "Robert Altman",
    "Robert Bresson",
    "Robert J. Flaherty",
    "Robert Rodríguez",
    "Robert Siodmak",
    "Robert Wise",
    "Robert Zemeckis",
    "Roberto Rossellini",
    "Roger Corman",
    "Roman Polański",
    "Rouben Mamoulian",
    "Russ Meyer",
    "Sadao Yamanaka",
    "Sam Peckinpah",
    "Sam Raimi",
    "Samuel Fuller",
    "Satyajit Ray",
    "Sergei M. Eisenstein",
    "Sergei Parajanov",
    "Sergio Leone",
    "Sidney Lumet",
    "Sidney Olcott",
    "Sofia Coppola",
    "Spike Lee",
    "Stan Brakhage",
    "Stanley Donen (& Gene Kelly)",
    "Stanley Kubrick",
    "Stephen Frears",
    "Steven Soderbergh",
    "Steven Spielberg",
    "Sydney Pollack",
    "Takeshi Kitano",
    "Terence Davies",
    "Terrence Malick",
    "Terry Gilliam",
    "Tex Avery",
    "Theodoros Angelopoulos",
    "Tim Burton",
    "Tod Browning",
    "Todd Haynes",
    "Tsai Ming-Liang",
    "Victor Fleming",
    "Victor Sjöström",
    "Vincente Minnelli",
    "Vittorio De Sica",
    "Vsevolod Pudovkin",
    "Walt Disney/Ub Iwerks",
    "Walter Hill",
    "Werner Herzog",
    "Wes Anderson",
    "Wes Craven",
    "William A. Wellman",
    "William Castle",
    "William Friedkin",
    "William K.L. Dickson",
    "William Wyler",
    "Wim Wenders",
    "Winsor McCay",
    "Wong Kar-Wai",
    "Woody Allen",
    "Yasujirō Ozu",
    "Yevgeni Bauer",
    "Yuriy Norshteyn",
    "Zhang Yimou",
    "Éric Rohmer",
});

const auto movieGenres = std::to_array<std::string_view>(
    {"Action", "Comedy", "Drama", "Fantasy", "Horror", "Mystery", "Romance", "Thriller", "Western"});

const auto movies = std::to_array<std::string_view>({
    "12 Angry Men",
    "2001: A Space Odyssey",
    "8½",
    "A Christmas Story",
    "A Clockwork Orange",
    "A Streetcar Named Desire",
    "Alien",
    "Aliens",
    "All About Eve",
    "All Quiet on the Western Front",
    "Amadeus",
    "American Beauty",
    "American History X",
    "Amores perros",
    "Annie Hall",
    "Apocalypse Now",
    "Arsenic and Old Lace",
    "Avatar",
    "Back to the Future",
    "Barry Lyndon",
    "Batman Begins",
    "Ben-Hur",
    "Big Fish",
    "Blade Runner",
    "Bom yeoreum gaeul gyeoul geurigo bom",
    "Braveheart",
    "Butch Cassidy and the Sundance Kid",
    "C'era una volta il West",
    "Casablanca",
    "Casino",
    "Children of Men",
    "Chinatown",
    "Cidade de Deus",
    "Citizen Kane",
    "City Lights",
    "Cool Hand Luke",
    "Crash",
    "Das Boot",
    "Das Leben der Anderen",
    "Der Untergang",
    "Det sjunde inseglet",
    "Dial M for Murder",
    "Die Hard",
    "District 9",
    "Dog Day Afternoon",
    "Donnie Darko",
    "Double Indemnity",
    "Dr. Strangelove or: How I Learned to Stop Worrying and Love the Bomb",
    "Duck Soup",
    "Ed Wood",
    "El laberinto del fauno",
    "El secreto de sus ojos",
    "Eternal Sunshine of the Spotless Mind",
    "Fa yeung nin wa",
    "Fanny och Alexander",
    "Fargo",
    "Festen",
    "Fight Club",
    "Finding Nemo",
    "Forrest Gump",
    "Full Metal Jacket",
    "Gandhi",
    "Gladiator",
    "Gone with the Wind",
    "Good Will Hunting",
    "Goodfellas",
    "Gran Torino",
    "Groundhog Day",
    "Harvey",
    "Hauru no ugoku shiro",
    "Heat",
    "High Noon",
    "His Girl Friday",
    "Hotaru no haka",
    "Hotel Rwanda",
    "How to Train Your Dragon",
    "Ikiru",
    "Il buono il brutto il cattivo.",
    "In Bruges",
    "Inception",
    "Indiana Jones and the Last Crusade",
    "Inglourious Basterds",
    "Into the Wild",
    "It Happened One Night",
    "It's a Wonderful Life",
    "Jaws",
    "Judgment at Nuremberg",
    "Kick-Ass",
    "Kill Bill: Vol. 1",
    "Kill Bill: Vol. 2",
    "Kind Hearts and Coronets",
    "King Kong",
    "L.A. Confidential",
    "La battaglia di Algeri",
    "La passion de Jeanne d'Arc",
    "La strada",
    "La vita è bella",
    "Ladri di biciclette",
    "Lawrence of Arabia",
    "Le fabuleux destin d'Amélie Poulain",
    "Le notti di Cabiria",
    "Le salaire de la peur",
    "Le scaphandre et le papillon",
    "Les diaboliques",
    "Les quatre cents coups",
    "Letters from Iwo Jima",
    "Life of Brian",
    "Lock Stock and Two Smoking Barrels",
    "Låt den rätte komma in",
    "Léon",
    "M",
    "Magnolia",
    "Manhattan",
    "Mary and Max",
    "Memento",
    "Metropolis",
    "Million Dollar Baby",
    "Modern Times",
    "Mononoke-hime",
    "Monsters Inc.",
    "Monty Python and the Holy Grail",
    "Mou gaan dou",
    "Mr. Smith Goes to Washington",
    "Mulholland Dr.",
    "Mystic River",
    "Network",
    "No Country for Old Men",
    "North by Northwest",
    "Notorious",
    "Nuovo Cinema Paradiso",
    "Oldeuboi",
    "On the Waterfront",
    "Once Upon a Time in America",
    "One Flew Over the Cuckoo's Nest",
    "Paths of Glory",
    "Patton",
    "Per qualche dollaro in più",
    "Persona",
    "Pirates of the Caribbean: The Curse of the Black Pearl",
    "Platoon",
    "Psycho",
    "Pulp Fiction",
    "Raging Bull",
    "Raiders of the Lost Ark",
    "Ran",
    "Rashômon",
    "Ratatouille",
    "Rear Window",
    "Rebecca",
    "Requiem for a Dream",
    "Reservoir Dogs",
    "Rocky",
    "Roman Holiday",
    "Rope",
    "Rosemary's Baby",
    "Saving Private Ryan",
    "Scarface",
    "Schindler's List",
    "Se7en",
    "Sen to Chihiro no kamikakushi",
    "Shichinin no samurai",
    "Sin City",
    "Singin' in the Rain",
    "Sleuth",
    "Slumdog Millionaire",
    "Smultronstället",
    "Snatch.",
    "Some Like It Hot",
    "Stalag 17",
    "Stand by Me",
    "Star Trek",
    "Star Wars",
    "Star Wars: Episode V - The Empire Strikes Back",
    "Star Wars: Episode VI - Return of the Jedi",
    "Strangers on a Train",
    "Sunrise: A Song of Two Humans",
    "Sunset Blvd.",
    "Taxi Driver",
    "Tenkû no shiro Rapyuta",
    "Terminator 2: Judgment Day",
    "The Apartment",
    "The Best Years of Our Lives",
    "The Big Lebowski",
    "The Big Sleep",
    "The Bourne Ultimatum",
    "The Bridge on the River Kwai",
    "The Dark Knight",
    "The Deer Hunter",
    "The Departed",
    "The Elephant Man",
    "The Exorcist",
    "The General",
    "The Godfather",
    "The Godfather: Part II",
    "The Gold Rush",
    "The Graduate",
    "The Grapes of Wrath",
    "The Great Dictator",
    "The Great Escape",
    "The Green Mile",
    "The Hustler",
    "The Incredibles",
    "The Kid",
    "The Killing",
    "The Lion King",
    "The Lord of the Rings: The Fellowship of the Ring",
    "The Lord of the Rings: The Return of the King",
    "The Lord of the Rings: The Two Towers",
    "The Maltese Falcon",
    "The Man Who Shot Liberty Valance",
    "The Manchurian Candidate",
    "The Matrix",
    "The Night of the Hunter",
    "The Philadelphia Story",
    "The Pianist",
    "The Prestige",
    "The Princess Bride",
    "The Shawshank Redemption",
    "The Shining",
    "The Silence of the Lambs",
    "The Sixth Sense",
    "The Social Network",
    "The Sting",
    "The Terminator",
    "The Thing",
    "The Third Man",
    "The Treasure of the Sierra Madre",
    "The Truman Show",
    "The Usual Suspects",
    "The Wild Bunch",
    "The Wizard of Oz",
    "The Wrestler",
    "There Will Be Blood",
    "To Kill a Mockingbird",
    "Tonari no Totoro",
    "Touch of Evil",
    "Toy Story",
    "Toy Story 3",
    "Trainspotting",
    "Trois couleurs: Rouge",
    "Twelve Monkeys",
    "Unforgiven",
    "Up",
    "V for Vendetta",
    "Vertigo",
    "WALL·E",
    "Who's Afraid of Virginia Woolf?",
    "Witness for the Prosecution",
    "Yeopgijeogin geunyeo",
    "Yôjinbô",
});

const auto tvShows = std::to_array<std::string_view>({
    "Africa",
    "Apocalypse: The Second World War",
    "Arcane",
    "Arrested Development",
    "As If",
    "Attack on Titan",
    "Avatar: The Last Airbender",
    "Band of Brothers",
    "Batman: The Animated Series",
    "Battlestar Galactica",
    "Better Call Saul",
    "Black Mirror",
    "Blackadder Goes Forth",
    "Blue Planet II",
    "BoJack Horseman",
    "Boardwalk Empire",
    "Breaking Bad",
    "Chappelle's Show",
    "Chernobyl",
    "Clarkson's Farm",
    "Community",
    "Cosmos",
    "Cosmos: A Spacetime Odyssey",
    "Cowboy Bebop",
    "Curb Your Enthusiasm",
    "Dark",
    "Das Boot",
    "Deadwood",
    "Death Note",
    "Dekalog",
    "Dexter",
    "Dopesick",
    "Downton Abbey",
    "Dragon Ball",
    "Fargo",
    "Fawlty Towers",
    "Firefly",
    "Fleabag",
    "Freaks and Geeks",
    "Friends",
    "Frozen Planet",
    "Fullmetal Alchemist: Brotherhood",
    "Game of Thrones",
    "Gomorrah",
    "Gravity Falls",
    "Gullak",
    "Hannibal",
    "Heartstopper",
    "House M.D.",
    "House of Cards",
    "Human Planet",
    "Hunter x Hunter",
    "I Claudius",
    "Invincible",
    "It's Always Sunny in Philadelphia",
    "Kota Factory",
    "Last Week Tonight with John Oliver",
    "Leyla and Mecnun",
    "Life",
    "Mad Men",
    "Mindhunter",
    "Monty Python's Flying Circus",
    "Narcos",
    "Nathan for You",
    "One Piece",
    "One Punch Man",
    "Only Fools and Horses",
    "Our Planet",
    "Over the Garden Wall",
    "Oz",
    "Parks and Recreation",
    "Peaky Blinders",
    "Peep Show",
    "Persona",
    "Planet Earth",
    "Planet Earth II",
    "Pride and Prejudice",
    "Rick and Morty",
    "Rome",
    "Seinfeld",
    "Sherlock",
    "Silicon Valley",
    "Six Feet Under",
    "Skam",
    "Sons of Anarchy",
    "South Park",
    "Spartacus: Gods of the Arena",
    "Steins;Gate",
    "Stranger Things",
    "Succession",
    "TVF Pitchers",
    "Taskmaster",
    "Ted Lasso",
    "The Beatles: Get Back",
    "The Blue Planet",
    "The Boys",
    "The Bridge",
    "The Civil War",
    "The Crown",
    "The Grand Tour",
    "The IT Crowd",
    "The Last Dance",
    "The Mandalorian",
    "The Office",
    "The Rehearsal",
    "The Shield",
    "The Simpsons",
    "The Sopranos",
    "The Thick of It",
    "The Twilight Zone",
    "The Vietnam War",
    "The West Wing",
    "The Wire",
    "The World at War",
    "The X-Files",
    "This Is Us",
    "True Detective",
    "Twin Peaks",
    "Twin Peaks",
    "Vinland Saga",
    "Westworld",
    "When They See Us",
});

}
