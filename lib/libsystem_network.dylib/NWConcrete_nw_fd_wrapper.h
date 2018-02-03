/* made by EzioChiu
   Image: /usr/lib/system/libsystem_network.dylib
 */

@interface NWConcrete_nw_fd_wrapper : NSObject <OS_nw_fd_wrapper> {
    int  fd;
    unsigned long long  guard;
    unsigned int  guarded;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithFileDescriptor:(int)arg1;

@end
