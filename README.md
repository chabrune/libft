# Libft - Ta Bibliothèque C Personnelle

C

Une bibliothèque C contenant des fonctions essentielles réimplémentées pour une utilisation future dans les projets 42.

## 📚 Description

Libft est le premier projet du cursus 42, visant à recréer des fonctions standard de la libc ainsi que d'autres fonctions utilitaires. Cette bibliothèque servira de base pour les projets futurs.

## 🛠 Fonctions Implémentées

### Fonctions de la Libc
| Catégorie | Fonctions |
|-----------|-----------|
| Tests de caractères | isalpha, isdigit, isalnum, isascii, isprint |
| Manipulation de chaînes | strlen, strlcpy, strlcat, strchr, strrchr, strncmp, strnstr |
| Manipulation de mémoire | memset, bzero, memcpy, memmove, memchr, memcmp |
| Conversions | toupper, tolower, atoi |
| Allocation mémoire | calloc, strdup |

### Fonctions Supplémentaires
| Fonction | Description |
|----------|-------------|
| ft_substr | Extrait une sous-chaîne |
| ft_strjoin | Concatène deux chaînes |
| ft_strtrim | Retire les caractères spécifiés |
| ft_split | Découpe une chaîne selon un délimiteur |
| ft_itoa | Convertit un int en chaîne |
| ft_strmapi | Applique une fonction à chaque caractère |
| ft_striteri | Itère sur chaque caractère |
| ft_putchar_fd | Écrit un caractère |
| ft_putstr_fd | Écrit une chaîne |
| ft_putendl_fd | Écrit une chaîne avec retour ligne |
| ft_putnbr_fd | Écrit un nombre |

### Bonus - Manipulation de Listes Chaînées
```c
typedef struct s_list {
    void *content;
    struct s_list *next;
} t_list;
```

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

## ⚙️ Compilation

```bash
make        # Compile la bibliothèque
make bonus  # Ajoute les fonctions bonus
make clean  # Nettoie les fichiers objets
make fclean # Nettoie tout
make re     # Recompile tout
```

## 📋 Normes de Code

- Code conforme à la Norminette
- Pas de variables globales
- Fonctions auxiliaires en static
- Compilation avec -Wall -Wextra -Werror
- Gestion de la mémoire rigoureuse

---
*Projet réalisé dans le cadre du cursus de l'école 42*
