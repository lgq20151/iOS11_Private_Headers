/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface nw_listener_inbox_protocol : nw_listener_inbox {
    struct nw_listen_protocol_callbacks { 
        int (*new_flow)(); 
        int (*disconnected)(); 
    }  _listen_callbacks;
    struct nw_listen_protocol { 
        struct nw_listen_protocol_callbacks {} *callbacks; 
        struct nw_protocol {} *protocol_handler; 
        void *protocol_handler_context; 
        void *handle; 
    }  _listen_protocol;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * _multiplexing_protocol;
}

- (void)cancel;
- (id)description;
- (id)initWithProtocol:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg1 delegate:(id)arg2;

@end
