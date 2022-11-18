#ifndef ENTETE__E
#define ENTETE__E


#	if ((defined(_MSVC_LANG) && _MSVC_LANG >= 201103L) || (defined(__cplusplus) && __cplusplus >= 201103L)) //c++ 11 et plus
#		define aligne_comme alignas
#		define aligne_de alignof
#		define caract�re_16_t char16_t
#		define caract�re_32_t char32_t
#		define construction_constante constexpr
#		define d�finir_type decltype
#		define sans_exception noexcept
#		define pointeur_nul nullptr
#		define d�fense_statique static_assert
#		define local_au_fil thread_local
#	endif

#	if ((defined(_MSVC_LANG) && _MSVC_LANG >= 202002L) || (defined(__cplusplus) && __cplusplus >= 202002L)) //c++ 20 et plus
#		define caract�re_8_t char8_t
#		define concept concept
#		define �valuation_constante consteval
#		define initialisation_constante constinit
#		define coroutine_attendre co_await
#		define coroutine_retourner co_return
#		define coroutine_rendre co_yield
#		define requiert requires
#	endif

#	if (defined(__cpp_transactional_memory) && __cpp_transactional_memory >= 201505L)
#		define annulation_atomique atomic_cancel
#		define engagement_atomique atomic_commit
#		define sans_exception_atomique atomic_noexcept
#		define synchronis� synchronized
#	endif

#	if (defined(__cpp_reflection) && __cpp_reflection >= 201902L)
#		define rel�ter_expression reflexpr
#	endif

#	define et and
#	define et_�gal and_eq
#	define assembleur asm
#	define automatique auto
#	define et_binaire bitand
#	define ou_binaire bitor
#	define bool�en bool
#	define briser break
#	define cas case
#	define attraper catch
#	define caract�re char
#	define classe class
#	define compl�ment_binaire compl
#	define constante const
#	define moulage_constant const_cast
#	define continuer continue
#	define d�faut default
#	define supprimer delete
#	define faire do
#	define double double
#	define moulage_dynamique dynamic_cast
#	define sinon else
#	define enum�re enum
#	define explicitement explicit
#	define exporter export
#	define exterieur extern
#	define faux false
#	define flottant float
#	define pour for
#	define ami friend
#	define aller_a goto
#	define si if
#	define en_ligne inline
#	define entier int
#	define long long
#	define mutable mutable
#	define espace_de_nom namespace
#	define nouveau new
#	define non not
#	define diff�rent not_eq
#	define op�rateur operator
#	define ou or
#	define ou_�gal or_eq
#	define priv� private
#	define prot�g� protected
#	define publique public
#	define enregistrer register
#	define moulage_de_r�interpr�tation reinterpret_cast
#	define retourne return
#	define court short
#	define sign� signed
#	define taille_de sizeof
#	define statique static
#	define moulage_statique static_cast
#	define structure struct
#	define commuter switch
#	define mod�le template
#	define �a this
#	define jette throw
#	define vrai true
#	define tentative try
#	define d�finir_type typedef
#	define identifiant_de_type typeid
#	define nom_de_type typename
#	define union union
#	define sans_signe unsigned
#	define utilisant using
#	define virtuel virtual
#	define vide void
#	define volatile volatile
#	define caract�re_long wchar_t
#	define tant_que while
#	define ou_exlusif xor
#	define ou_exclusif_ou_�gal xor_eq

#	define �gal =
#	define plus +
#	define moins -
#	define fois *
#	define diviser /
#	define modulo %
#	define plus_�gal +=
#	define moins_�gal -=
#	define fois_�gal *=
#	define diviser_�gal /=
#	define modulo_�gal %=
#	define plus_plus ++
#	define moins_moins --
#	define est_�gal_� ==
#	define est_diff�rent_de !=
#	define est_plus_grand_que >
#	define est_plus_petit_que <
#	define est_�gal_ou_plus_grand_que >=
#	define est_�gal_ou_plus_petit_que <=
#	define pointeur ->
#	define virgule ,
#	define point .
#	define point_point ::
#	define point_point_point ...

#	define fin_de_ligne ;

#	define toujours fin_de_ligne fin_de_ligne

#	define binaire(n) 0b##n
#	define hexad�cimal(n) 0x##n


#	define tabarnak main
#endif