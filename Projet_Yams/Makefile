# Spécifie le compilateur
CXX = g++

# Options du compilateur
CXXFLAGS = -std=c++11 -Wall

# Nom du programme final
TARGET = yams

# Répertoires source
SRC_DIR = .
JEU_DIR = jeu
FIGURES_DIR = jeu/Figures
TEMPLATES_DIR = jeu/Figures/Templates

# Fichiers source
SOURCES = $(SRC_DIR)/main.cpp \
          $(JEU_DIR)/Joueur.cpp $(JEU_DIR)/Lancer.cpp $(JEU_DIR)/Game.cpp \
          $(FIGURES_DIR)/Chance.cpp $(FIGURES_DIR)/Figure.cpp $(FIGURES_DIR)/Combinaisons.cpp \
          $(FIGURES_DIR)/Grande_Suite.cpp $(FIGURES_DIR)/Petite_Suite.cpp \
          $(TEMPLATES_DIR)/Brelan.cpp $(TEMPLATES_DIR)/Carree.cpp \
          $(TEMPLATES_DIR)/Full.cpp $(TEMPLATES_DIR)/Yams.cpp

# Fichiers objet générés
OBJECTS = $(SOURCES:.cpp=.o)

# Règle par défaut pour construire le programme
all: $(TARGET)

# Règle pour créer le programme exécutable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Règle pour construire les fichiers objets
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoie les fichiers objets et l'exécutable
clean:
	rm -f $(TARGET) $(OBJECTS)
