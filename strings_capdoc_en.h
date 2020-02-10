/**
 * strings_capdoc_en.h
 * Custom CAPDOC engligh strings for WiFiManager.
 * For injecting content in pages.
 */

const char CD_HTTP_CONNECTING[]             PROGMEM =
  "<div class='content'>"
  "  <h3 class='title'>Connecting device to Wifi.</h3>"
  "  <span class='text'>Page will close automatically when the connection is successful.</span>"
  "  <img class='loader' src='data:image/gif;base64,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' alt='' />"
  "  <style>"
  "    .content { display: flex; flex-direction: column; align-content: center; width: 100%; height: 100%; justify-content: center; }"
  "    .title { text-align: center; font-size: 60px; font-family: verdana, helvetical, arial, sans-serif; font-weight: normal; color: #1E76F7; margin: 0 0 30px; }"
  "    .text { text-align: center; font-size: 45px; color: #888888; font-family: verdana, helvetical, arial, sans-serif; max-width: 900px; width: 100%; display: block; margin: 0 auto 80px; }"
  "    .loader { width: 50px; height: 50px; margin: 0 auto; display: block; font-family: verdana, helvetical, arial, sans-serif; }"
  "  </style>"
  "  <script>"
  "    setTimeout(() => {"
  "      window.location.href = location.origin + '/';"
  "    }, 30000);"
  "  </script>"
  "</div>";

// Custom script for '/wifi' and '/' pages
const char CD_CUSTOM_WIFI_SCRIPT[]             PROGMEM =
  "<script>"
  // Custom script Start
  "document.title='Connect Blood Pressure Device';for(var wrap=document.querySelector('.wrap'),wrap_children=document.querySelector('.wrap').children,network_number=document.querySelectorAll('.wrap div a').length,i=0;i<network_number;i++){(row=wrap_children[i]).className='network_row'}var network_list=document.createElement('div');wrap.insertAdjacentElement('afterbegin',network_list),network_list.className='network_list';var network_rows=document.querySelectorAll('.network_row');for(i=0;i<network_rows.length;i++){var row=network_rows[i];network_list.appendChild(row)}var network_bar=document.createElement('div');wrap.insertAdjacentElement('afterbegin',network_bar),network_bar.className='network_bar';var main_title=document.createElement('h1');wrap.insertAdjacentElement('afterbegin',main_title),main_title.className='main_title',main_title.textContent='Connect your Blood Pressure device';var network_bar_title=document.createElement('span');network_bar_title.className='network_bar_title',network_bar_title.textContent='Choose a network...',network_bar.insertAdjacentElement('afterbegin',network_bar_title),network_bar.appendChild(network_bar_title);var forms=wrap.querySelectorAll('form'),credentials_form=forms[0],refresh_form=forms[1];credentials_form&&(credentials_form.className='credentials_form hidden'),refresh_form&&(network_bar_title.after(refresh_form),refresh_form.className='refresh_form');var chosen_network_name=document.createElement('h2');credentials_form.insertAdjacentElement('afterbegin',chosen_network_name),chosen_network_name.className='chosen_network_name hidden';var chosen_network=document.createElement('span');credentials_form.insertAdjacentElement('afterbegin',chosen_network),chosen_network.className='chosen_network hidden',chosen_network.textContent='Network';var go_back_button=document.createElement('span');credentials_form.insertAdjacentElement('afterbegin',go_back_button),go_back_button.className='go_back_button';var arrow_image=document.createElement('img');arrow_image.src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAwAAAAMCAYAAABWdVznAAAACXBIWXMAAAsSAAALEgHS3X78AAAAr0lEQVQokZWRzQ2CQBBGn4YCOH97sAQpgQ6kBCzBDiwBO7AE7cAStAMvc6eDNUtGQ3Ah4Uv2sPP7ZoYY4+KT1Ep6SKrSv2BGIYQSuAIH4AX0KXKbCw8h1MDTgy9AbWbvwTnFkdRJipJ6Sc3UX4yqVo6wB+5Aa2YDxljFCOHm9pOZdX+cruwMS9okrjVIq4f+dcisNXXb+VrP327ZBE+aHq5Jt5gdOlU0swY4+pVLgA+z3YwbnjeltAAAAABJRU5ErkJggg==',go_back_button.appendChild(arrow_image);var go_back_button_text=document.createElement('span');go_back_button_text.textContent='Networks',go_back_button.appendChild(go_back_button_text);var network_links=wrap.querySelectorAll('.network_row a'),password_input=document.querySelector('#p'),save_button=credentials_form.querySelector('button');save_button.disabled=!0,network_links.forEach(function(e){e.removeAttribute('onclick'),e.onclick=function(t){t.preventDefault(),t.stopPropagation();var n=e.innerText||e.textContent;document.getElementById('s').value=n,chosen_network_name.textContent=n;var r=e.nextElementSibling.classList.contains('l');password_input.value='',r?(credentials_form.classList.remove('hidden'),chosen_network_name.classList.remove('hidden'),chosen_network.classList.remove('hidden'),network_list.className='network_list hidden',network_bar.className='network_bar hidden'):(save_button.disabled=!1,save_button.click())}}),go_back_button.onclick=function(){network_bar.classList.remove('hidden'),network_list.classList.remove('hidden'),credentials_form.className='credentials_form hidden',chosen_network_name.className='chosen_network_name hidden',chosen_network.className='chosen_network hidden'};var updateSaveButton=function(e){e.target.value?save_button.disabled=!1:save_button.disabled=!0};function getLocale(){return'undefined'!=typeof window&&(navigator.userLanguage||navigator.language)||'en-US'}password_input.addEventListener('keyup',updateSaveButton),password_input.addEventListener('paste',updateSaveButton),setInterval(()=>{password_input.value?save_button.disabled=!1:save_button.disabled=!0},1e3),document.getElementById('timezone_offset').value=(new Date).getTimezoneOffset(),document.getElementById('timezone').value=Intl.DateTimeFormat().resolvedOptions().timeZone,document.getElementById('language').value=getLocale();var pathname=window.location.pathname;if('/0wifi'===pathname){var no_network_text=document.createElement('span');no_network_text.textContent='No network found.',no_network_text.className='no_network_text',network_list.appendChild(no_network_text)}"
  // Custom script End
  "</script>";

// Custom style for '/wifi' and '/' pages
const char CD_CUSTOM_WIFI_STYLE[]             PROGMEM =
  "<style>"
  // Custom style Start
  "#s,label[for='s']{display:none}#p{margin:8px 0 20px}#language,#timezone,#timezone_offset,.msg,form>br,form>hr,label[for=language],label[for=timezone],label[for=timezone_offset]{display:none}form button{background-color:#1e76f7!important;font-weight:400!important}form button[type=submit]{font-size:1.2rem!important}form button[type=submit]:disabled{background-color:#8c8c8c!important}.wrap{padding:5px 20px;width:100%;max-width:400px!important}.wrap a{font-weight:400!important}.network_bar{display:block;background-color:#1e76f7;padding:3px 10px;display:flex;justify-content:space-between}.network_bar_title{color:#fff;text-transform:uppercase;align-self:center;font-size:15px}.refresh_form button{padding:0;margin:0;font-size:16px!important}.credentials_form{margin-top:-10px}input{border:1px solid #bdbdbd;padding:10px}.main_title{font-size:16px;font-weight:400;margin:15px 0 30px;display:block;text-align:center}.hidden{display:none!important}.chosen_network{font-size:15px;display:block;color:#888}.chosen_network_name{display:block;font-weight:400;margin:0 0 20px}.go_back_button{display:inline-block;font-weight:400;font-size:15px;margin:0 0 20px;padding:5px 7px;background-color:#c7c7c7;border-radius:4px;cursor:pointer;line-height:16px}.go_back_button:first-letter{font-size:18px;vertical-align:bottom}.go_back_button img{margin:0 5px 0 0;width:10px;height:auto}"
  // Custom style End
  "</style>";
  