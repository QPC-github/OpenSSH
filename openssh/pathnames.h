/*	$OpenBSD: pathnames.h,v 1.5 2001/04/12 19:15:24 markus Exp $	*/

/*
 * Author: Tatu Ylonen <ylo@cs.hut.fi>
 * Copyright (c) 1995 Tatu Ylonen <ylo@cs.hut.fi>, Espoo, Finland
 *                    All rights reserved
 *
 * As far as I am concerned, the code I have written for this software
 * can be used freely for any purpose.  Any derived versions of this
 * software must be clearly marked as such, and if the derived work is
 * incompatible with the protocol description in the RFC file, it must be
 * called by a name other than "ssh" or "Secure Shell".
 */

#ifndef ETCDIR
#define ETCDIR				"/etc"
#endif

#ifndef _PATH_SSH_PIDDIR
#define _PATH_SSH_PIDDIR		"/var/run"
#endif

/*
 * System-wide file containing host keys of known hosts.  This file should be
 * world-readable.
 */
#define _PATH_SSH_SYSTEM_HOSTFILE	ETCDIR "/ssh_known_hosts"
#define _PATH_SSH_SYSTEM_HOSTFILE2	ETCDIR "/ssh_known_hosts2"

/*
 * Of these, ssh_host_key must be readable only by root, whereas ssh_config
 * should be world-readable.
 */
#define _PATH_SERVER_CONFIG_FILE	ETCDIR "/sshd_config"
#define _PATH_HOST_CONFIG_FILE		ETCDIR "/ssh_config"
#define _PATH_HOST_KEY_FILE		ETCDIR "/ssh_host_key"
#define _PATH_HOST_DSA_KEY_FILE		ETCDIR "/ssh_host_dsa_key"
#define _PATH_HOST_RSA_KEY_FILE		ETCDIR "/ssh_host_rsa_key"
#define _PATH_DH_PRIMES			ETCDIR "/primes"

#ifndef _PATH_SSH_PROGRAM
#define _PATH_SSH_PROGRAM		"/usr/bin/ssh"
#endif

/*
 * The process id of the daemon listening for connections is saved here to
 * make it easier to kill the correct daemon when necessary.
 */
#define _PATH_SSH_DAEMON_PID_FILE	_PATH_SSH_PIDDIR "/sshd.pid"

/*
 * The directory in user\'s home directory in which the files reside. The
 * directory should be world-readable (though not all files are).
 */
#define _PATH_SSH_USER_DIR		".ssh"

/*
 * Per-user file containing host keys of known hosts.  This file need not be
 * readable by anyone except the user him/herself, though this does not
 * contain anything particularly secret.
 */
#define _PATH_SSH_USER_HOSTFILE		"~/.ssh/known_hosts"
#define _PATH_SSH_USER_HOSTFILE2	"~/.ssh/known_hosts2"

/*
 * Name of the default file containing client-side authentication key. This
 * file should only be readable by the user him/herself.
 */
#define _PATH_SSH_CLIENT_IDENTITY	".ssh/identity"
#define _PATH_SSH_CLIENT_ID_DSA		".ssh/id_dsa"
#define _PATH_SSH_CLIENT_ID_RSA		".ssh/id_rsa"

/*
 * Configuration file in user\'s home directory.  This file need not be
 * readable by anyone but the user him/herself, but does not contain anything
 * particularly secret.  If the user\'s home directory resides on an NFS
 * volume where root is mapped to nobody, this may need to be world-readable.
 */
#define _PATH_SSH_USER_CONFFILE		".ssh/config"

/*
 * File containing a list of those rsa keys that permit logging in as this
 * user.  This file need not be readable by anyone but the user him/herself,
 * but does not contain anything particularly secret.  If the user\'s home
 * directory resides on an NFS volume where root is mapped to nobody, this
 * may need to be world-readable.  (This file is read by the daemon which is
 * running as root.)
 */
#define _PATH_SSH_USER_PERMITTED_KEYS	".ssh/authorized_keys"
#define _PATH_SSH_USER_PERMITTED_KEYS2	".ssh/authorized_keys2"

/*
 * Per-user and system-wide ssh "rc" files.  These files are executed with
 * /bin/sh before starting the shell or command if they exist.  They will be
 * passed "proto cookie" as arguments if X11 forwarding with spoofing is in
 * use.  xauth will be run if neither of these exists.
 */
#define _PATH_SSH_USER_RC		".ssh/rc"
#define _PATH_SSH_SYSTEM_RC		ETCDIR "/sshrc"

/*
 * Ssh-only version of /etc/hosts.equiv.  Additionally, the daemon may use
 * ~/.rhosts and /etc/hosts.equiv if rhosts authentication is enabled.
 */
#define _PATH_SSH_HOSTS_EQUIV		ETCDIR "/shosts.equiv"
#define _PATH_RHOSTS_EQUIV		"/etc/hosts.equiv"

/*
 * Default location of askpass
 */
#ifndef _PATH_SSH_ASKPASS_DEFAULT
#define _PATH_SSH_ASKPASS_DEFAULT	"/usr/X11R6/bin/ssh-askpass"
#endif

/* for scp */
#ifndef _PATH_CP
#define _PATH_CP			"cp"
#endif

/* for sftp */
#ifndef _PATH_SFTP_SERVER
#define _PATH_SFTP_SERVER		"/usr/libexec/sftp-server"
#endif
#ifndef _PATH_LS
#define _PATH_LS			"ls"
#endif

/* path to login program */
#ifndef LOGIN_PROGRAM
# ifdef LOGIN_PROGRAM_FALLBACK
#  define LOGIN_PROGRAM         LOGIN_PROGRAM_FALLBACK
# else
#  define LOGIN_PROGRAM         "/usr/bin/login"
# endif
#endif /* LOGIN_PROGRAM */

/* Askpass program define */
#ifndef ASKPASS_PROGRAM
#define ASKPASS_PROGRAM         "/usr/lib/ssh/ssh-askpass"
#endif /* ASKPASS_PROGRAM */

/*
 * Relevant only when using builtin PRNG.
 */
#ifndef SSH_PRNG_SEED_FILE
# define SSH_PRNG_SEED_FILE      _PATH_SSH_USER_DIR"/prng_seed"
#endif /* SSH_PRNG_SEED_FILE */
#ifndef SSH_PRNG_COMMAND_FILE
# define SSH_PRNG_COMMAND_FILE   ETCDIR "/ssh_prng_cmds"
#endif /* SSH_PRNG_COMMAND_FILE */
