/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXMIDIManager : NSObject <AXMIDIDeviceProtocol> {
    NSString * _clientIdentifier;
    NSMutableSet * _devices;
    id /* block */  _eventHandler;
    unsigned int  _midiClientRef;
    unsigned int  _midiInputPortRef;
    AXMIDIParser * _parser;
}

@property (nonatomic, retain) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *devices;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int midiClientRef;
@property (nonatomic) unsigned int midiInputPortRef;
@property (nonatomic, retain) AXMIDIParser *parser;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addMidiDestination:(unsigned int)arg1;
- (void)_addMidiEntity:(unsigned int)arg1;
- (void)_addMidiSource:(unsigned int)arg1;
- (id)_deviceForMidiDevice:(unsigned int)arg1 addIfNeeded:(bool)arg2;
- (void)_handleIOErrorNotification:(struct MIDIIOErrorNotification { int x1; unsigned int x2; unsigned int x3; int x4; }*)arg1;
- (void)_handleObjectAddedNotification:(struct MIDIObjectAddRemoveNotification { int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; int x6; }*)arg1;
- (void)_handleObjectRemovedNotification:(struct MIDIObjectAddRemoveNotification { int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; int x6; }*)arg1;
- (void)_handlePropertyChangedNotification:(struct MIDIObjectPropertyChangeNotification { int x1; unsigned int x2; unsigned int x3; int x4; struct __CFString {} *x5; }*)arg1;
- (void)_handleSerialPortOwnerChangedNotification:(struct MIDIObjectPropertyChangeNotification { int x1; unsigned int x2; unsigned int x3; int x4; struct __CFString {} *x5; }*)arg1;
- (void)_handleThruConnectionsChangedNotification:(struct MIDIObjectPropertyChangeNotification { int x1; unsigned int x2; unsigned int x3; int x4; struct __CFString {} *x5; }*)arg1;
- (id)_nameForMidiObjectType:(int)arg1;
- (void)_removeMidiDestination:(unsigned int)arg1;
- (void)_removeMidiDevice:(unsigned int)arg1;
- (void)_removeMidiEntity:(unsigned int)arg1;
- (void)_removeMidiSource:(unsigned int)arg1;
- (void)_resetAndDetectDevices;
- (id)clientIdentifier;
- (void)dealloc;
- (void)device:(id)arg1 didAddEntity:(id)arg2;
- (void)device:(id)arg1 didRemoveEntity:(id)arg2;
- (void)device:(id)arg1 entity:(id)arg2 didAddDestination:(id)arg3;
- (void)device:(id)arg1 entity:(id)arg2 didAddSource:(id)arg3;
- (void)device:(id)arg1 entity:(id)arg2 didRemoveDestination:(id)arg3;
- (void)device:(id)arg1 entity:(id)arg2 didRemoveSource:(id)arg3;
- (id)devices;
- (id /* block */)eventHandler;
- (id)init;
- (id)initWithIdentifier:(id)arg1 eventHandler:(id /* block */)arg2;
- (unsigned int)midiClientRef;
- (unsigned int)midiInputPortRef;
- (id)parser;
- (void)printAttachedDevices;
- (void)setClientIdentifier:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setMidiClientRef:(unsigned int)arg1;
- (void)setMidiInputPortRef:(unsigned int)arg1;
- (void)setParser:(id)arg1;

@end