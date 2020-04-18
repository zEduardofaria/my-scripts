#!/bin/bash
SEARCH="firefox"
ALVO="$1"
echo "Pesquisa no Pastebin"
$SEARCH "https://google.com/search?q=site:pastebin.com+$ALVO" 2> /dev/null
echo "Pesquisa no Trello"
$SEARCH "https://google.com/search?q=site:trello.com+$ALVO" 2> /dev/null
echo "Pesquisa por arquivos"
$SEARCH "https://google.com/search?q=site:$ALVO+ext:php+OR+ext:asp+OR+ext:txt+OR+ext:xls+OR+ext:doc+OR+ext:docx+OR+ext:xlsx+OR+ext:ppt+OR+ext:pptx+OR+ext:pdf" 2> /dev/null

