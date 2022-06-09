# libft

Minha implementação de algumas das funções da Biblioteca Padrão do C.
> WIP

Estão são alguns dos meus testes. Para testá-los, basta clonar o repositório e executar `make`.

![libft-test-pass](https://user-images.githubusercontent.com/32808884/172913747-ee74103f-823b-4d85-9e03-c83db74c4dc6.png)

![libft-test-fail](https://user-images.githubusercontent.com/32808884/172913760-75606d09-b9c1-4dd0-93ea-5801f47d59fd.png)


![libft-test](https://user-images.githubusercontent.com/32808884/172914123-8d3b2390-d42e-4cfc-86dc-54d13df88e2e.png)


### Script pre-commit

Este script rejeita commits de arquivos com nome `ft_*.c`, `ft_*.h` e `libft.h` enquanto estiverem fora da norma.

![pre-commit-preview](https://user-images.githubusercontent.com/32808884/172914543-b99c7eea-1fca-45e3-949e-3662e5d45fac.png)

#### Instalação:
```sh
cp scripts/pre-commit .git/hooks/
chmod +x .git/hooks/pre-commit
```
Para uma [descrição](https://github.com/magalhaesm/libft/blob/main/scripts/README.md) mais completa.
