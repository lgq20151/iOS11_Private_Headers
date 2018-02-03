/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_advertise_descriptor : NSObject <OS_nw_advertise_descriptor> {
    char * _domain;
    char * _name;
    unsigned long long  _txtLength;
    char * _txtRecord;
    char * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)initWithName:(const char *)arg1 type:(const char *)arg2 domain:(const char *)arg3;

@end
