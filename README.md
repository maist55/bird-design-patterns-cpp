# Bird Design Patterns C++

Projet C++ démontrant l’utilisation de la programmation orientée objet et de plusieurs patrons de conception à travers un système d’oiseaux, de canards, de décorateurs de plumage et d’un adaptateur pour voiture.

## Description

Ce projet modélise différents types d’oiseaux à l’aide de l’héritage, du polymorphisme, des classes abstraites et des pointeurs intelligents.

Il met principalement en pratique :

- le patron **Décorateur**, utilisé pour ajouter dynamiquement des types de plumage à des canards ;
- le patron **Adaptateur**, utilisé pour rendre une voiture compatible avec une interface attendue ;
- le **polymorphisme**, utilisé pour manipuler différents types d’oiseaux à travers des interfaces communes ;
- la gestion mémoire moderne avec `std::unique_ptr`.

Le programme principal crée plusieurs objets, applique différents comportements et affiche les résultats dans la console.

## Fonctionnalités

- Création de différents types de canards :
  - `Mallard`
  - `Gadwall`
  - `WoodDuck`

- Application de décorateurs classiques :
  - `PlumageColoré`
  - `PlumageZebré`
  - `PlumageDoré`

- Application de décorateurs mystiques :
  - `Flammes`
  - `Diamant`
  - `Bouclier`

- Création d’oiseaux volants :
  - `Eagle`
  - `Pigeon`

- Utilisation d’un adaptateur :
  - `Adapteur`
  - `Voiture`

- Gestion mémoire avec :
  - `std::unique_ptr`
  - `std::make_unique`

## Concepts utilisés

Ce projet met en pratique plusieurs notions importantes en C++ :

- programmation orientée objet ;
- héritage ;
- polymorphisme ;
- classes abstraites ;
- interfaces ;
- patron Décorateur ;
- patron Adaptateur ;
- pointeurs intelligents ;
- gestion mémoire automatique avec RAII.

## Structure du projet

```text
bird-design-patterns-cpp/
├── Adaptateur.h
├── Decorateur.h
├── DecorateurMystique.h
├── DerivésDuck.h
├── Duck.h
├── FlyingBirds.h
├── InterfaceBird.h
├── InterfaceFlyingBird.h
├── NonFlyingBird.h
├── Voiture.h
├── main.cpp
└── README.md
