<!DOCTYPE html><html lang="en"><head><meta charset="UTF-8"><meta name="viewport" content="initial-scale=1, user-scalable=no"><meta name="apple-mobile-web-app-capable" content="yes"><meta name="application-name" content="PlayingCards.io"><link rel="apple-touch-icon" href="../img/apple-touch-icon.png"><link rel="stylesheet" href="../../https@use.typekit.net/dkw1lrx.css"><title>PlayingCards.io Virtual Tabletop</title><meta property="og:title" content="PlayingCards.io Virtual Tabletop"><meta property="og:image" content="/img/card.png"><meta name="description" content="Play any tabletop game online with friends. PlayingCards.io Multiplayer Virtual Card Table"><meta property="og:description" content="Play any tabletop game online with friends. PlayingCards.io Multiplayer Virtual Card Table"><link rel="stylesheet" href="../build/game.css"><meta name="robots" content="noindex"></head><body><div id="mainContent"></div><div id="modalParent"></div><div id="superModalParent"></div><section class="Splash" id="splash"><div class="Splash__main"><div class="Splash__arrow"><div class="Splash__arrow-text">Share this code with <br />the other players</div><svg viewBox="0 0 88 135" xmlns="http://www.w3.org/2000/svg" xml:space="preserve" style="stroke-linecap:round;stroke-linejoin:round;stroke-miterlimit:1.5"><path style="fill:none" d="M0 0h87.924v134.166H0z"/><path d="M4.985 5.11C50.888-.509 63.138 84.681 64.726 125.415" style="fill:none;stroke:#000;stroke-width:4.5px"/><path d="M44.136 111.242c1.845.645 20.702 18.014 20.702 18.726 0 .88 16.871-20.355 17.633-20.355" style="fill:none;stroke:#000;stroke-width:4.5px"/></svg></div><div class="Splash__top"><img src="../img/playingcardsio-logo.svg"><div class="Splash__room-code"></div><button class="Splash__share-button"><svg class="Splash__copy-icon" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 448 512"><path d="M433.941 65.941l-51.882-51.882A48 48 0 0 0 348.118 0H176c-26.51 0-48 21.49-48 48v48H48c-26.51 0-48 21.49-48 48v320c0 26.51 21.49 48 48 48h224c26.51 0 48-21.49 48-48v-48h80c26.51 0 48-21.49 48-48V99.882a48 48 0 0 0-14.059-33.941zM352 32.491a15.88 15.88 0 0 1 7.431 4.195l51.882 51.883A15.885 15.885 0 0 1 415.508 96H352V32.491zM288 464c0 8.822-7.178 16-16 16H48c-8.822 0-16-7.178-16-16V144c0-8.822 7.178-16 16-16h80v240c0 26.51 21.49 48 48 48h112v48zm128-96c0 8.822-7.178 16-16 16H176c-8.822 0-16-7.178-16-16V48c0-8.822 7.178-16 16-16h144v72c0 13.2 10.8 24 24 24h72v240z"></path></svg>
<svg class="Splash__copy-success" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512">
<path d="M256 8C119.033 8 8 119.033 8 256s111.033 248 248 248 248-111.033 248-248S392.967 8 256 8zm0 464c-118.664 0-216-96.055-216-216 0-118.663 96.055-216 216-216 118.664 0 216 96.055 216 216 0 118.663-96.055 216-216 216zm141.63-274.961L217.15 376.071c-4.705 4.667-12.303 4.637-16.97-.068l-85.878-86.572c-4.667-4.705-4.637-12.303.068-16.97l8.52-8.451c4.705-4.667 12.303-4.637 16.97.068l68.976 69.533 163.441-162.13c4.705-4.667 12.303-4.637 16.97.068l8.451 8.52c4.668 4.705 4.637 12.303-.068 16.97z" />
</svg></button></div><div class="Splash__description">PlayingCards.io is a shared space to play and learn. Drag &amp; tap objects to interact. Play by your own rules.</div><div class="Splash__learn-more-container"><a class="Splash__learn-more" href="../docs/overview" target="_blank">Learn More<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 448 512"><path d="M216.5 36.5l-7.1 7.1c-4.7 4.7-4.7 12.3 0 17L387.9 239H12c-6.6 0-12 5.4-12 12v10c0 6.6 5.4 12 12 12h375.9L209.4 451.5c-4.7 4.7-4.7 12.3 0 17l7.1 7.1c4.7 4.7 12.3 4.7 17 0l211.1-211.1c4.7-4.7 4.7-12.3 0-17L233.4 36.5c-4.7-4.7-12.3-4.7-17 0z"/></svg></a></div><div class="Splash__button-container" id="dynamic-root"><div class="loading">Loading</div></div><div class="Splash__tip">Creator Tip: Automation Buttons can do more than deal cards, use them to shuffle, sort, update counters, and more.</div></div></section><script>if (window.location.href.toString().indexOf('debug=1') >= 0) {
  window.onerror = function(messageOrEvent, source, lineno, colno, error) {
    alert(messageOrEvent + '\n\n' + source + ':' + lineno + ':' + colno)
  }
}

;(function() {
  var timeout = null
  var shareButton = document.querySelector('.Splash__share-button')
  shareButton.addEventListener('click', function() {
    var input = document.createElement('input')
    input.value = window.location.protocol + '//' + window.location.host + window.location.pathname
    shareButton.parentNode.appendChild(input)
    input.select()
    document.execCommand('copy')
    shareButton.parentNode.removeChild(input)

    clearTimeout(timeout)
    shareButton.classList.add('Splash--copied')
    timeout = setTimeout(function() {
      shareButton.classList.remove('Splash--copied')
    }, 2000)
  })
}())
</script><script src="../../https@js.stripe.com/v3/default.htm"></script><script src="../build/bundle.js"></script></body></html>