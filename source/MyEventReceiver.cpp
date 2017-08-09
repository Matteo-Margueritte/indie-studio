//
// MyEventReceiver.cpp for  in /home/tetard/eptechY2/CPP/indie
//
// Made by girard
// Login   <benjamin.girard@epitech.eu>
//
// Started on  Mon Jun 12 16:18:56 2017 girard
// Last update Mon Jun 12 16:20:35 2017 girard
//

#include "MyEventReceiver.hpp"

MyEventReceiver::MyEventReceiver()
{
  for (irr::u32 i=0; i<irr::KEY_KEY_CODES_COUNT; ++i)
    KeyIsDown[i] = false;
}

bool			MyEventReceiver::OnEvent(const irr::SEvent& event)
{
  // Remember whether each key is down or up
  if (event.EventType == irr::EET_KEY_INPUT_EVENT)
    KeyIsDown[event.KeyInput.Key] = event.KeyInput.PressedDown;
  return false;
}

bool			MyEventReceiver::IsKeyDown(irr::EKEY_CODE keyCode) const
{
  return KeyIsDown[keyCode];
}
