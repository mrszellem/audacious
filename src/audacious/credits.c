/*  Audacious - Cross-platform multimedia player
 *  Copyright (C) 2005-2009  Audacious Team
 *
 *  Based on BMP:
 *  Copyright (C) 2003-2004  BMP development team
 *
 *  Based on XMMS:
 *  Copyright (C) 1998-2003  XMMS development team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; under version 3 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses>.
 *
 *  The Audacious team does not consider modular code linking to
 *  Audacious or using our public API to be a derived work.
 */

#include <stddef.h>

#include "config.h"
#include "i18n.h"
#include "misc.h"

static const char * audacious_brief =
 "<big><b>Audacious %s</b></big>\n"
 "Copyright (C) 2005-2012 Audacious Team";

static const char * const credit_text[] = {
    N_("Core developers:"),
    "Christian Birchinger",
    "Michael Färber",
    "Matti Hämäläinen",
    "John Lindgren",
    "Cristi Măgherușan",
    "Tomasz Moń",
    "William Pitcock",
    "Jonathan Schleifer",
    "Ben Tucker",
    "Tony Vroon",
    "Yoshiki Yazawa",
    NULL,

    N_("Graphics:"),
    "George Averill",
    "Stephan Sokolow",
    NULL,

    N_("Default skin:"),
    "George Averill",
    "Michael Färber",
    "William Pitcock",
    NULL,

    N_("Plugin development:"),
    "Kiyoshi Aman",
    "Luca Barbato",
    "Daniel Barkalow",
    "Michael Färber",
    "Shay Green",
    "Matti Hämäläinen",
    "Sascha Hlusiak",
    "John Lindgren",
    "Michał Lipski",
    "Giacomo Lozito",
    "Cristi Măgherușan",
    "Boris Mikhaylov",
    "Tomasz Moń",
    "Sebastian Pipping",
    "William Pitcock",
    "Derek Pomery",
    "Jonathan Schleifer",
    "Andrew Shadura",
    "Tony Vroon",
    "Yoshiki Yazawa",
    NULL,

    N_("Patch authors:"),
    "Chris Arepantis",
    "Anatoly Arzhnikov",
    "Alexis Ballier",
    "Eric Barch",
    "Carlo Bramini",
    "Massimo Cavalleri",
    "Stefano D'Angelo",
    "Jean-Louis Dupond",
    "Laszlo Dvornik",
    "Ralf Ertzinger",
    "Mike Frysinger",
    "Mark Glines",
    "Hans de Goede",
    "David Guglielmi",
    "Michael Hanselmann",
    "Juho Heikkinen",
    "Joseph Jezak",
    "Henrik Johansson",
    "Jussi Judin",
    "Teru Kamogashira",
    "Chris Kehler",
    "Thomas Lange",
    "Mark Loeser",
    "Alex Maclean",
    "Mikael Magnusson",
    "Rodrigo Martins de Matos Ventura",
    "Mihai Maruseac",
    "Diego Pettenò",
    "Mike Ryan",
    "Michael Schwendt",
    "Edward Sheldrake",
    "Kirill Shendrikowski",
    "Kazuki Shimura",
    "Valentine Sinitsyn",
    "Will Storey",
    "Johan Tavelin",
    "Christoph J. Thompson",
    "Bret Towe",
    "Peter Wagner",
    "John Wehle",
    "Ben Wolfson",
    "Tim Yamin",
    "Ivan N. Zlatev",
    NULL,

    N_("1.x developers:"),
    "George Averill",
    "Daniel Barkalow",
    "Christian Birchinger",
    "Daniel Bradshaw",
    "Adam Cecile",
    "Michael Färber",
    "Matti Hämäläinen",
    "Troels Bang Jensen",
    "Giacomo Lozito",
    "Cristi Măgherușan",
    "Tomasz Moń",
    "William Pitcock",
    "Derek Pomery",
    "Mohammed Sameer",
    "Jonathan Schleifer",
    "Ben Tucker",
    "Tony Vroon",
    "Yoshiki Yazawa",
    "Eugene Zagidullin",
    NULL,

    N_("BMP Developers:"),
    "Artem Baguinski",
    "Edward Brocklesby",
    "Chong Kai Xiong",
    "Milosz Derezynski",
    "David Lau",
    "Ole Andre Vadla Ravnaas",
    "Michiel Sikkes",
    "Andrei Badea",
    "Peter Behroozi",
    "Bernard Blackham",
    "Oliver Blin",
    "Tomas Bzatek",
    "Liviu Danicel",
    "Jon Dowland",
    "Artur Frysiak",
    "Sebastian Kapfer",
    "Lukas Koberstein",
    "Dan Korostelev",
    "Jolan Luff",
    "Michael Marineau",
    "Tim-Philipp Muller",
    "Julien Portalier",
    "Andrew Ruder",
    "Olivier Samyn",
    "Martijn Vernooij",
    NULL,

    NULL
};

static const char * const translators_text[] = {
    N_("Argentinian Spanish:"),
    "Adrián Ramirez Escalante",
    NULL,
    N_("Belarusian:"),
    "Darafei Praliaskouski",
    NULL,
    N_("Basque:"),
    "Iñaki Larrañaga Murgoitio",
    NULL,
    N_("Brazilian Portuguese:"),
    "Fábio Antunes",
    "Karen Eliot",
    "Philipi Pinto",
    NULL,
    N_("Breton:"),
    "Thierry Vignaud",
    NULL,
    N_("Bulgarian:"),
    "Andrew Ivanov",
    NULL,
    N_("Catalan:"),
    "Ernest Adrogué",
    "Jordi Amenós",
    NULL,
    N_("Chinese:"),
    "Tse Chih Chiu",
    NULL,
    N_("Croatian:"),
    "Marin Glibic",
    NULL,
    N_("Czech:"),
    "Petr Pisar",
    NULL,
    N_("Dutch:"),
    "Laurens Buhler",
    "Tony Vroon",
    NULL,
    N_("Estonian:"),
    "Ivar Smolin",
    NULL,
    N_("Finnish:"),
    "Matti Hämäläinen",
    "Elias Julkunen",
    "Tuomas Lähteenmäki",
    "Pauli Virtanen",
    NULL,
    N_("French:"),
    "Adam Cecile",
    "Stanislas Zeller",
    "Stany Henry",
    "Jean-Alexandre Anglès d'Auriac",
    NULL,
    N_("German:"),
    "Matthias Debus",
    "Michael Färber",
    "Michael Hanselmann",
    "Thomas Lange",
    "Carl Trope",
    NULL,
    N_("Georgian:"),
    "George Machitidze",
    NULL,
    N_("Greek:"),
    "Kouzinopoulos Haris",
    "Stavros Giannouris",
    "Stathis Kamperis",
    NULL,
    N_("Hindi:"),
    "Dhananjaya Sharma",
    NULL,
    N_("Hungarian:"),
    "Laszlo Dvornik",
    "Peter Polonkai",
    NULL,
    N_("Italian:"),
    "Alessio D'Ascanio",
    "Jacopo Lorenzetti",
    "Diego Pettenò",
    NULL,
    N_("Japanese:"),
    "Dai",
    NULL,
    N_("Korean:"),
    "DongCheon Park",
    NULL,
    N_("Latvian:"),
    "Einars Sprugis",
    NULL,
    N_("Lithuanian:"),
    "Paul Daukas",
    "Rimas Kudelis",
    "Algimantas Margevičius",
    NULL,
    N_("Macedonian:"),
    "Arangel Angov",
    NULL,
    N_("Mexican Spanish:"),
    "Jorge A. García Sosa",
    NULL,
    N_("Polish:"),
    "Artur Czechowski",
    "Michał Kiedrowicz",
    "Wojciech Myrda",
    "Piotr Sokół",
    "Szymon Weihs",
    NULL,
    N_("Portuguese:"),
    "Luís Picciochi Oliveira",
    NULL,
    N_("Romanian:"),
    "Daniel Patriche",
    "Cristi Măgherușan",
    NULL,
    N_("Russian:"),
    "Sergey V. Mironov",
    "Alexandr Orlov",
    NULL,
    N_("Serbian (Latin):"),
    "Strahinja Kustudić",
    NULL,
    N_("Serbian (Cyrillic):"),
    "Мирослав Николић",
    "Strahinja Kustudić",
    NULL,
    N_("Simplified Chinese:"),
    "Yang Zhang",
    NULL,
    N_("Slovak:"),
    "Andrej Herceg",
    "Tomáš Vadina",
    NULL,
    N_("Spanish:"),
    "Jordi Amenós",
    "Jorge Andrés",
    "Cosme Domínguez Díaz",
    "Adrián Ramirez Escalante",
    "Jeki Sinneo Leinos",
    "Francisco Javier F. Serrador",
    "Gustavo D. Vranjes",
    NULL,
    N_("Swedish:"),
    "Martin Persenius",
    NULL,
    N_("Traditional Chinese:"),
    "Cheng-Wei Chien",
    "Sylecn Song",
    "Ruei-Yuan Lu",
    "Yang Zhang",
    NULL,
    N_("Turkish:"),
    "Murat Şenel",
    "Eren Turkay",
    NULL,
    N_("Ukrainian:"),
    "Kostyantyn Fedenko",
    "Rax Garfield",
    "Mykola Lynnyk",
    NULL,
    N_("Vietnamese:"),
    "Lê Trường An",
    NULL,
    N_("Welsh:"),
    "Edward Brocklesby",
    "William Pitcock",
    NULL,

    NULL
};

void get_audacious_credits (const char * * brief, const char * const * *
 credits, const char * const * * translators)
{
    if (brief != NULL)
        *brief = audacious_brief;
    if (credits != NULL)
        *credits = credit_text;
    if (translators != NULL)
        *translators = translators_text;
}
