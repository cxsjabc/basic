#!/bin/bash

isdnMyProviderRemoteNet=172.16.0.100
isdnYourProviderRemoteNet=10.0.0.10
isdnOnlineService="MyProvider"

remoteNet=$(eval "echo \$$(echo isdn${isdnOnlineService}RemoteNet)")
echo $remoteNet

remoteNet=$(eval "echo \$isdnMyProviderRemoteNet")
echo $remoteNet

remoteNet=$(eval "echo \$$(echo isdnMyProviderRemoteNet)")
echo $remoteNet



